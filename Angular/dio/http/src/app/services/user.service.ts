import { HttpClient, HttpHeaders } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';
import { User } from '../models/user';

@Injectable({
    providedIn: 'root',
})
export class UserService {
    apiUrl =
        'https://sheet.best/api/sheets/9191c310-790c-44e4-8b8c-841b7e9f673d';
    httpOptions = {
        headers: new HttpHeaders({
            'Content-Type': 'Application/json',
        }),
    };

    constructor(private httpClient: HttpClient) {}

    getUsers(): Observable<User[]> {
        return this.httpClient.get<User[]>(this.apiUrl);
    }

    getUser(id: string): Observable<User[]> {
        return this.httpClient.get<User[]>(`${this.apiUrl}/id/${id}`);
    }

    updateUser(id: string, user: User): Observable<User> {
        return this.httpClient.put<User>(
            `${this.apiUrl}/id/${id}`,
            user,
            this.httpOptions
        );
    }

    postUser(user: User): Observable<User> {
        return this.httpClient.post<User>(this.apiUrl, user, this.httpOptions);
    }

    deleteUser(id: string): Observable<User> {
        return this.httpClient.delete<User>(`${this.apiUrl}/id/${id}`);
    }
}
