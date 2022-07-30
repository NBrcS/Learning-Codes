import { Book } from './book';

export class apiResponse {
    total: number = 0;
    page: number = 0;
    books: Array<Book> = [];
}
