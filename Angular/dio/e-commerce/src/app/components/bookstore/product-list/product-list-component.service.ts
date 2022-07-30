import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Book } from './product-item/model/book';
import { Observable } from 'rxjs';
import { apiResponse } from './product-item/model/apiResponse';

@Injectable()
export class BookService {
    private apiUrl = `https://api.itbook.store/1.0/search/angular`;

    constructor(private httpClient: HttpClient) {}

    getBooks(): Observable<apiResponse> {
        return this.httpClient.get<apiResponse>(this.apiUrl);
    }
}
