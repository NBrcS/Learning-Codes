import { Component, OnInit } from '@angular/core';
import { FormBuilder, FormGroup } from '@angular/forms';
import { ActivatedRoute, Router } from '@angular/router';
import { Observable } from 'rxjs';
import { User } from 'src/app/models/user';
import { UserService } from 'src/app/services/user.service';

@Component({
    selector: 'app-user-form',
    templateUrl: './user-form.component.html',
    styleUrls: ['./user-form.component.css'],
})
export class UserFormComponent implements OnInit {
    userForm: FormGroup;
    users: Array<User> = [];
    userId: number = 0;

    constructor(
        private fb: FormBuilder,
        private userService: UserService,
        private activatedRoute: ActivatedRoute,
        private router: Router
    ) {
        this.userForm = this.fb.group({
            id: 0,
            name: '',
            secondName: '',
            age: 0,
            work: '',
        });
    }

    ngOnInit(): void {
        this.getUsers();
        this.activatedRoute.paramMap.subscribe((params) => {
            this.userId = Number(params.get('id'));
            console.log(this.userId);

            if (this.userId !== null) {
                this.userService
                    .getUser(this.userId.toString())
                    .subscribe((result) => {
                        this.userForm.patchValue({
                            id: result[0].id,
                            name: result[0].name,
                            secondName: result[0].secondName,
                            age: result[0].age,
                            work: result[0].work,
                        });
                    });
            }
        });
    }

    getUsers() {
        this.userService.getUsers().subscribe((response) => {
            this.users = response;
        });
    }

    send(): void {
        this.userForm.get('id')?.patchValue(this.users.length + 1);
        this.userService.postUser(this.userForm.value).subscribe(
            (result) => {
                alert('user registered successfully');
            },
            (err) => {
                alert('An error occurred');
                console.log('An error occurred', err);
            },
            () => {
                this.router.navigate(['/']);
            }
        );
    }

    updateUser() {
        this.userService
            .updateUser(this.userId.toString(), this.userForm.value)
            .subscribe(
                (result) => {
                    alert('Successfully user update');
                },
                (err) => {
                    alert('An error occurred');
                    console.log('An error occurred', err);
                },
                () => {
                    this.router.navigate(['/']);
                }
            );
    }

    actionButton(): void {
        if (this.userId !== null) {
            this.updateUser();
        } else {
            this.send();
        }
    }
}
