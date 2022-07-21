import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { RouterModule } from '@angular/router';
import { HttpClientModule } from '@angular/common/http';

import { AppComponent } from './app.component';
import { NaviBarComponent } from './navi-bar/navi-bar.component';
import { Error404Component } from './error404/error404.component';
import { CourseModule } from './course/course.module';

@NgModule({
  declarations: [AppComponent, NaviBarComponent, Error404Component],
  imports: [
    BrowserModule,
    HttpClientModule,
    CourseModule,
    RouterModule.forRoot([
      {
        path: '',
        redirectTo: 'courses',
        pathMatch: 'full',
      },
      {
        path: '**',
        component: Error404Component,
      },
    ]),
  ],

  providers: [],

  bootstrap: [AppComponent],
})
export class AppModule {}
