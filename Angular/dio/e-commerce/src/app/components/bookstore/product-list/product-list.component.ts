import { Component, OnInit } from '@angular/core';
import { apiResponse } from './product-item/model/apiResponse';
import { Book } from './product-item/model/book';
import { BookService } from './product-list-component.service';

@Component({
    selector: 'market-product-list',
    templateUrl: './product-list.component.html',
    styleUrls: ['./product-list.component.css'],
})
export class ProductListComponent implements OnInit {
    response: apiResponse = new apiResponse();

    constructor(private booksSevice: BookService) {}

    ngOnInit(): void {
        this.booksSevice.getBooks().subscribe(
            (response): void => {
                this.response = response;
            },
            (err) => {
                console.log(err);
            }
        );
    }
}
