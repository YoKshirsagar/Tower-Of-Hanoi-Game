#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void animation()
{
    int i, j = 0,bu1 = 0, ch;
    setcolor(4);
    settextstyle(1, 0, 5);
    outtextxy(140, 13, "TOWER OF HANOI");
    setcolor(14);
    settextstyle(0, 0, 1);
    outtextxy(450, 410, "CREATED BY :");
    outtextxy(540, 430, "* YOGESH");
    outtextxy(540, 450, "* SAMARTH");
    outtextxy(540, 470, "* YASH");
    setcolor(15);
    line(0, 400, 600, 400); // bottom horizontal line

    setcolor(4);
    line(100, 400, 100, 250); // first pole
    line(120, 400, 120, 250);
    line(100, 250, 120, 250);

    line(300, 400, 300, 250); // second pole
    line(320, 400, 320, 250);
    line(300, 250, 320, 250);

    line(500, 400, 500, 250); // third pole
    line(520, 400, 520, 250);
    line(500, 250, 520, 250);

    setfillstyle(1, 15); // first pole
    floodfill(101, 251, 4);

    setfillstyle(1, 15); // second pole
    floodfill(301, 251, 4);

    setfillstyle(1, 15); // third pole
    floodfill(501, 251, 4);

    setcolor(15);

    line(100, 400, 100, 250); // first pole left line
    line(120, 400, 120, 250); // first pole right line
    line(100, 250, 120, 250); // first pole top line

    line(300, 400, 300, 250); // second pole
    line(320, 400, 320, 250);
    line(300, 250, 320, 250);

    line(500, 400, 500, 250); // third pole
    line(520, 400, 520, 250);
    line(500, 250, 520, 250);

    setcolor(1);
    rectangle(70, 370, 150, 398); // 3rd box
    rectangle(80, 340, 140, 368); // 2nd box
    rectangle(90, 310, 130, 338); // 1st box
    setfillstyle(1, 3);
    floodfill(71, 371, 1);
    setfillstyle(1, 2);
    floodfill(81, 341, 1);
    setfillstyle(1, 5);
    floodfill(91, 311, 1);

    setcolor(15);
    rectangle(70, 370, 150, 398); // 3rd box
    rectangle(80, 340, 140, 368); // 2nd box
    rectangle(90, 310, 130, 338); // 1st box

    //    line(0, 250, 500, 250);
    getch();
    // loop for moving 1st box up from first tower
    for (bu1 = 1; bu1 <= 200; bu1++) // 1
    {
        delay(20);

        // sound(10 * 7);
        if (339 - bu1 >= 250)
        {

            setcolor(15);
            line(100, 340, 100, 338 - bu1);       // left line of 1st tower
            line(120, 340, 120, 338 - bu1);       // right line of 1st tower
            line(100, 339 - bu1, 120, 339 - bu1); // top line of 1st tower
            setfillstyle(1, 15);
            floodfill(101, 340 - bu1, 15);
        }
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        setcolor(9);
        rectangle(90, 310 - j, 130, 338 - j); // 1st box
        setfillstyle(1, 0);
        floodfill(91, 311 - j, 9);
        setcolor(0);
        rectangle(90, 310 - j, 130, 338 - j); // 1st box
        j++;
        setcolor(9);
        rectangle(90, 310 - j, 130, 338 - j); // 1st box
        setfillstyle(1, 5);
        floodfill(91, 311 - j, 9);
        setcolor(15);
        rectangle(90, 310 - j, 130, 338 - j); // 1st box
        if (339 - bu1 == 250)
        {
            line(100, 339 - bu1, 120, 339 - bu1); // top line of 1st tower
        }
        delay(10);
    }

    j = 0;
    // loop for moving 1st box right from first tower
    for (bu1 = 1; bu1 <= 400; bu1++) // 2
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);
        setcolor(9);
        rectangle(90 + j, 110, 130 + j, 138); // 1st box
        setfillstyle(1, 0);
        floodfill(91 + j, 111, 9);
        setcolor(0);
        rectangle(90 + j, 110, 130 + j, 138); // 1st box
        j++;
        setcolor(9);
        rectangle(90 + j, 110, 130 + j, 138); // 1st box
        setfillstyle(1, 5);
        floodfill(91 + j, 111, 9);
        setcolor(15);
        rectangle(90 + j, 110, 130 + j, 138); // 1st box
        delay(10);
    }

    j = 0;
    i = 0;
    // loop for moving 1st box down on third tower

    for (bu1 = 1; bu1 <= 262; bu1++) // 3
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);
        setcolor(9);
        rectangle(490, 110 + j, 530, 138 + j); // 1st box
        setfillstyle(1, 0);
        floodfill(491, 111 + j, 9);
        setcolor(0);
        rectangle(490, 110 + j, 530, 138 + j); // 1st box
        j++;
        setcolor(9);
        rectangle(490, 110 + j, 530, 138 + j); // 1st box
        setfillstyle(1, 5);
        floodfill(491, 111 + j, 9);
        setcolor(15);
        rectangle(490, 110 + j, 530, 138 + j); // 1st box
        delay(10);

        if (109 + j >= 250)
        {
            i++;
            line(500, 250, 500, 250 + i);     // left line of 1st tower
            line(520, 250, 520, 250 + i);     // right line of 1st tower
            line(500, 250, 520, 250);         // top line of 1st tower
            line(500, 250 + i, 520, 250 + i); // top line of 1st tower
            setfillstyle(1, 15);
            floodfill(501, 249 + i, 15);
        }
    }
    sound(700);
    delay(20);
    nosound();
    j = 0;
    i = 0;
    // loop for moving 2nd box up from first tower

    for (bu1 = 1; bu1 <= 262; bu1++) // 4
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);
        if (369 - bu1 >= 250)
        {
            setcolor(15);
            line(100, 370, 100, 368 - bu1);       // left line of 1st tower
            line(120, 370, 120, 368 - bu1);       // right line of 1st tower
            line(100, 369 - bu1, 120, 369 - bu1); // top line of 1st tower
            setfillstyle(1, 15);
            floodfill(101, 370 - bu1, 15);
        }
        setcolor(1);
        rectangle(80, 340 - j, 140, 368 - j); // 2nd box
        setfillstyle(1, 0);
        floodfill(81, 341 - j, 1);
        setcolor(0);
        rectangle(80, 340 - j, 140, 368 - j); // 2nd box
        j++;
        setcolor(1);
        rectangle(80, 340 - j, 140, 368 - j); // 2nd box
        setfillstyle(1, 2);
        floodfill(81, 341 - j, 1);
        setcolor(15);
        rectangle(80, 340 - j, 140, 368 - j); // 2nd box
        if (369 - bu1 == 250)
        {
            line(100, 369 - bu1, 120, 369 - bu1); // top line of 1st tower
        }
        delay(10);
    }
    j = 0;
    i = 0;
    // j = 262
    for (bu1 = 1; bu1 <= 200; bu1++) // 5
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);
        setcolor(1);
        rectangle(80 + j, 78, 140 + j, 106); // 2nd box
        setfillstyle(1, 0);
        floodfill(81 + j, 79, 1);
        setcolor(0);
        rectangle(80 + j, 78, 140 + j, 106); // 2nd box
        j++;
        setcolor(1);
        rectangle(80 + j, 78, 140 + j, 106); // 2nd box
        setfillstyle(1, 2);
        floodfill(81 + j, 79, 1);
        setcolor(15);
        rectangle(80 + j, 78, 140 + j, 106); // 2nd box
        delay(20);
    }
    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 293; bu1++) // 6
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);
        if (78 + j > 251)
        {
            setcolor(15);
            line(300, 250, 320, 250);
            line(300, 251 + i, 320, 251 + i);
            line(300, 250, 300, 251 + i);
            line(320, 250, 320, 251 + i);
            setfillstyle(1, 15);
            floodfill(301, 251 + i, 15);
            i++;
        }
        setcolor(1);
        rectangle(280, 78 + j, 340, 106 + j); // 2nd box
        setfillstyle(1, 0);
        floodfill(281, 79 + j, 1);
        setcolor(0);
        rectangle(280, 78 + j, 340, 106 + j); // 2nd box
        j++;
        setcolor(1);
        rectangle(280, 78 + j, 340, 106 + j); // 2nd box
        setfillstyle(1, 2);
        floodfill(281, 79 + j, 1);
        setcolor(15);
        rectangle(280, 78 + j, 340, 106 + j); // 2nd box
        delay(20);
    }
    sound(700);
    delay(20);
    nosound();
    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 262; bu1++) // 7
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(490, 372 - j, 530, 400 - j); // 1st box
        setfillstyle(1, 0);
        floodfill(491, 373 - j, 9);
        setcolor(0);
        rectangle(490, 372 - j, 530, 400 - j); // 1st box
        j++;
        setcolor(9);
        rectangle(490, 372 - j, 530, 400 - j); // 1st box
        setfillstyle(1, 5);
        floodfill(491, 373 - j, 9);
        setcolor(15);
        rectangle(490, 372 - j, 530, 400 - j); // 1st box
        if (399 - j >= 250)
        {
            setcolor(15);
            line(500, 400, 520, 400);
            line(500, 399 - i, 520, 399 - i);
            line(500, 400, 500, 399 - i);
            line(520, 400, 520, 399 - i);
            setfillstyle(1, 15);
            floodfill(501, 400 - i, 15);
            if (i == 1)
            {
                line(0, 400, 600, 400);
            }
            i++;
        }
        delay(10);
    }
    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 200; bu1++) // 8
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(490 - j, 110, 530 - j, 138); // 1st box
        setfillstyle(1, 0);
        floodfill(491 - j, 111, 9);
        setcolor(0);
        rectangle(490 - j, 110, 530 - j, 138); // 1st box
        j++;
        setcolor(9);
        rectangle(490 - j, 110, 530 - j, 138); // 1st box
        setfillstyle(1, 5);
        floodfill(491 - j, 111, 9);
        setcolor(15);
        rectangle(490 - j, 110, 530 - j, 138); // 1st box

        delay(10);
    }

    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 232; bu1++) // 9
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(290, 110 + j, 330, 138 + j); // 1st box
        setfillstyle(1, 0);
        floodfill(291, 111 + j, 9);
        setcolor(0);
        rectangle(290, 110 + j, 330, 138 + j); // 1st box
        j++;
        setcolor(9);
        rectangle(290, 110 + j, 330, 138 + j); // 1st box
        setfillstyle(1, 5);
        floodfill(291, 111 + j, 9);
        setcolor(15);
        rectangle(290, 110 + j, 330, 138 + j); // 1st box
        if (110 + j > 251)
        {
            line(300, 250, 320, 250);
            line(300, 251 + i, 320, 251 + i);
            i++;
        }
        delay(10);
    }
    sound(700);
    delay(20);
    nosound();
    j = 0;
    i = 0;

    // 3rd box

    for (bu1 = 1; bu1 <= 250; bu1++) // 10
    {
        delay(20);
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        setcolor(9);
        rectangle(70, 370 - j, 150, 398 - j); // 3rd box
        setfillstyle(1, 0);
        floodfill(71, 371 - j, 9);
        setcolor(0);
        rectangle(70, 370 - j, 150, 398 - j); // 3rd box
        j++;
        setcolor(9);
        rectangle(70, 370 - j, 150, 398 - j); // 3rd box
        setfillstyle(1, 3);
        floodfill(71, 371 - j, 9);
        setcolor(15);
        rectangle(70, 370 - j, 150, 398 - j); // 3rd box

        if (399 - j >= 250)
        {
            line(100, 400, 120, 400);
            line(100, 399 - i, 120, 399 - i);
            i++;
        }

        delay(10);
    }
    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 400; bu1++) // 11
    {
        delay(20);
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }

        setcolor(9);
        rectangle(70 + j, 120, 150 + j, 148); // 3rd box
        setfillstyle(1, 0);
        floodfill(71 + j, 121, 9);
        setcolor(0);
        rectangle(70 + j, 120, 150 + j, 148); // 3rd box
        j++;
        setcolor(9);
        rectangle(70 + j, 120, 150 + j, 148); // 3rd box
        setfillstyle(1, 3);
        floodfill(71 + j, 121, 9);
        setcolor(15);
        rectangle(70 + j, 120, 150 + j, 148); // 3rd box

        delay(10);
    }
    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 250; bu1++) // 12
    {
        delay(20);
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        setcolor(9);
        rectangle(470, 120 + j, 550, 148 + j); // 3rd box
        setfillstyle(1, 0);
        floodfill(471, 121 + j, 9);
        setcolor(0);
        rectangle(470, 120 + j, 550, 148 + j); // 3rd box
        j++;
        setcolor(9);
        rectangle(470, 120 + j, 550, 148 + j); // 3rd box
        setfillstyle(1, 3);
        floodfill(471, 121 + j, 9);
        setcolor(15);
        rectangle(470, 120 + j, 550, 148 + j); // 3rd box
        if (120 + j > 251)
        {
            line(500, 250, 520, 250);
            line(500, 251 + i, 520, 251 + i);
            i++;
        }
        delay(10);
    }
    sound(700);
    delay(20);
    nosound();
    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 232; bu1++) // 13
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(290, 342 - j, 330, 370 - j); // 1st box
        setfillstyle(1, 0);
        floodfill(291, 343 - j, 9);
        setcolor(0);
        rectangle(290, 342 - j, 330, 370 - j); // 1st box
        j++;
        setcolor(9);
        rectangle(290, 342 - j, 330, 370 - j); // 1st box
        setfillstyle(1, 5);
        floodfill(291, 343 - j, 9);
        setcolor(15);
        rectangle(290, 342 - j, 330, 370 - j); // 1st box
        if (370 - j > 251)
        {
            line(300, 370, 320, 370);
            line(300, 370 - i, 320, 370 - i);
            i++;
        }
        delay(10);
    }

    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 200; bu1++) // 14
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(290 - j, 110, 330 - j, 138); // 1st box
        setfillstyle(1, 0);
        floodfill(291 - j, 111, 9);
        setcolor(0);
        rectangle(290 - j, 110, 330 - j, 138); // 1st box
        j++;
        setcolor(9);
        rectangle(290 - j, 110, 330 - j, 138); // 1st box
        setfillstyle(1, 5);
        floodfill(291 - j, 111, 9);
        setcolor(15);
        rectangle(290 - j, 110, 330 - j, 138); // 1st box
        delay(10);
    }

    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 261; bu1++) // 15
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(90, 110 + j, 130, 138 + j); // 1st box
        setfillstyle(1, 0);
        floodfill(91, 111 + j, 9);
        setcolor(0);
        rectangle(90, 110 + j, 130, 138 + j); // 1st box
        j++;
        setcolor(9);
        rectangle(90, 110 + j, 130, 138 + j); // 1st box
        setfillstyle(1, 5);
        floodfill(91, 111 + j, 9);
        setcolor(15);
        rectangle(90, 110 + j, 130, 138 + j); // 1st box
        if (110 + j > 251)
        {
            line(100, 250 + i, 120, 250 + i);
            i++;
        }
        delay(10);
    }
    sound(700);
    delay(20);
    nosound();
    j = 0;
    i = 0;

    for (bu1 = 1; bu1 <= 250; bu1++) // 16
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }

        delay(20);
        setcolor(1);
        rectangle(280, 371 - j, 340, 399 - j); // 2nd box
        setfillstyle(1, 0);
        floodfill(281, 372 - j, 1);
        setcolor(0);
        rectangle(280, 371 - j, 340, 399 - j); // 2nd box
        j++;
        setcolor(1);
        rectangle(280, 371 - j, 340, 399 - j); // 2nd box
        setfillstyle(1, 2);
        floodfill(281, 372 - j, 1);
        setcolor(15);
        rectangle(280, 371 - j, 340, 399 - j); // 2nd box
        if (399 - j > 251)
        {
            line(300, 399 - i, 320, 399 - i);
            i++;
        }
        delay(20);
    }
    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 200; bu1++) // 17
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);
        setcolor(1);
        rectangle(280 + j, 121, 340 + j, 149); // 2nd box
        setfillstyle(1, 0);
        floodfill(281 + j, 122, 1);
        setcolor(0);
        rectangle(280 + j, 121, 340 + j, 149); // 2nd box
        j++;
        setcolor(1);
        rectangle(280 + j, 121, 340 + j, 149); // 2nd box
        setfillstyle(1, 2);
        floodfill(281 + j, 122, 1);
        setcolor(15);
        rectangle(280 + j, 121, 340 + j, 149); // 2nd box

        delay(20);
    }

    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 220; bu1++) // 18
    {
        // sound(10 * 7);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }

        delay(20);
        setcolor(1);
        rectangle(480, 121 + j, 540, 149 + j); // 2nd box
        setfillstyle(1, 0);
        floodfill(481, 122 + j, 1);
        setcolor(0);
        rectangle(480, 121 + j, 540, 149 + j); // 2nd box
        j++;
        setcolor(1);
        rectangle(480, 121 + j, 540, 149 + j); // 2nd box
        setfillstyle(1, 2);
        floodfill(481, 122 + j, 1);
        setcolor(15);
        rectangle(480, 121 + j, 540, 149 + j); // 2nd box
        if (121 + j > 251)
        {
            line(500, 250 + i, 520, 250 + i);
            i++;
        }
        delay(20);
    }
    sound(700);
    delay(20);
    nosound();
    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 250; bu1++) // 19
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(90, 371 - j, 130, 399 - j); // 1st box
        setfillstyle(1, 0);
        floodfill(91, 372 - j, 9);
        setcolor(0);
        rectangle(90, 371 - j, 130, 399 - j); // 1st box
        j++;
        setcolor(9);
        rectangle(90, 371 - j, 130, 399 - j); // 1st box
        setfillstyle(1, 5);
        floodfill(91, 372 - j, 9);
        setcolor(15);
        rectangle(90, 371 - j, 130, 399 - j); // 1st box
        if (399 - j > 251)
        {
            line(100, 400 - i, 120, 400 - i);
            i++;
        }
        delay(10);
    }

    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 400; bu1++) // 20
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(90 + j, 121, 130 + j, 149); // 1st box
        setfillstyle(1, 0);
        floodfill(91 + j, 122, 9);
        setcolor(0);
        rectangle(90 + j, 121, 130 + j, 149); // 1st box
        j++;
        setcolor(9);
        rectangle(90 + j, 121, 130 + j, 149); // 1st box
        setfillstyle(1, 5);
        floodfill(91 + j, 122, 9);
        setcolor(15);
        rectangle(90 + j, 121, 130 + j, 149); // 1st box

        delay(10);
    }
    j = 0;
    i = 0;
    for (bu1 = 1; bu1 <= 192; bu1++) // 21
    {
        // sound(30);
        if (kbhit())
        {
            ch = getch();
            if (ch == 27)
            {
                goto end;
            }
            else if (ch == 13)
            {
                getch();
            }
        }
        delay(20);

        setcolor(9);
        rectangle(490, 121 + j, 530, 149 + j); // 1st box
        setfillstyle(1, 0);
        floodfill(491, 122 + j, 9);
        setcolor(0);
        rectangle(490, 121 + j, 530, 149 + j); // 1st box
        j++;
        setcolor(9);
        rectangle(490, 121 + j, 530, 149 + j); // 1st box
        setfillstyle(1, 5);
        floodfill(491, 122 + j, 9);
        setcolor(15);
        rectangle(490, 121 + j, 530, 149 + j); // 1st box
        if (121 + j > 251)
        {
            line(500, 250 + i, 520, 250 + i);
            i++;
        }

        delay(10);
    }
end:
}

void play()
{
    int ch, i = 0, k = 0, j = 0, m = 0, speed = 10,abc=0;
    int bu2 = 0, bd2 = 0, br2 = 0, bl2 = 0;
    int bu3 = 0, bd3 = 0, br3 = 0, bl3 = 0;
    int inc, chk = 0;
    setcolor(15);
    settextstyle(5, 0, 7);
    outtextxy(25, 13, "TOWER OF HANOI");
    settextstyle(0, 0, 1);
    outtextxy(540, 100, "CREATED BY :");
    outtextxy(540, 120, "YOGESH");
    outtextxy(540, 140, "SAMARTH");
    outtextxy(540, 160, "YASH");
    line(0, 478, 638, 478); // down line
    line(0, 478, 0, 0);     // left line
    line(0, 0, 638, 0);     // top line
    line(638, 1, 638, 478); // right line

    line(100, 350, 130, 350);
    line(100, 478, 100, 350); // first tower
    line(130, 478, 130, 350);
    setfillstyle(1, 15);
    floodfill(101, 351, 15);

    line(300, 478, 300, 350); // second tower
    line(330, 478, 330, 350);
    line(300, 350, 330, 350);
    setfillstyle(1, 15);
    floodfill(310, 360, 15);

    line(500, 478, 500, 350); // third tower
    line(530, 478, 530, 350);
    line(500, 350, 530, 350);
    setfillstyle(1, 15);
    floodfill(510, 360, 15);

    setcolor(2);
    rectangle(55, 475, 175, 445); // big rectangle
    rectangle(70, 440, 160, 410); // middle rectanhle
    rectangle(85, 405, 145, 375); // small rectangle
    setfillstyle(1, 4);
    floodfill(60, 450, 2); // for big rectangle
    setfillstyle(1, 2);
    floodfill(80, 420, 2); // for middle rectangle
    setfillstyle(1, 5);
    floodfill(95, 385, 2); // for small rectangle
    setcolor(15);
    rectangle(55, 475, 175, 445); // big rectangle
    rectangle(70, 440, 160, 410); // middle rectanhle
    rectangle(85, 405, 145, 375); // small rectangle

    ch = getch();
// 1st box
first:
    if (ch == 113)
    {
		// line(20,20,50,50);
		// delay(5000);
	while (1)
	{
	    if (85 + k - m >= 480 && 145 + k - m <= 550 && (70 + br2 - bl2 >= 465 && 160 + br2 - bl2 <= 565) && (55 + br3 - bl3 >= 450 && 175 + br3 - bl3 <= 580) && 375 - i + j > 350)
	    {
	    abc = 1;
		goto win;
	    }
	    ch = getch();
	    // cleardevice();
	    if (ch == 72)
	    {
		for (inc = 1; inc <= 200; inc++)
		{
		    if (getpixel(85 + k - m, 405 - i + j - inc) == 2 || getpixel(85 + k - m, 405 - i + j - inc) == 4 || getpixel(145 + k - m, 405 - i + j - inc) == 2 || getpixel(145 + k - m, 405 - i + j - inc) == 4)
		    {
			chk = 1;
		    }
		}
		if (chk == 0 && 440 - bu2 + bd2 > 350 && 475 - bu3 + bd3 > 350)
		{
		    setcolor(2);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 0);
		    floodfill(95 + k - m, 385 - i + j, 2); // for small rectangle
		    setcolor(0);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle

		    i = i + speed;
		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 7); // for middle rectangle

		    setcolor(8);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 8); // for small rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
		chk = 0;
	    }
	    if (ch == 77)
	    {

		if (440 - bu2 + bd2 > 350 && 475 - bu3 + bd3 > 350 && 375 - i + j < 320)
		{
		    setcolor(2);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 0);
		    floodfill(95 + k - m, 385 - i + j, 2); // for small rectangle
		    setcolor(0);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle

		    k = k + speed;
		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 7); // for middle rectangle

		    setcolor(8);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 8); // for small rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
	    }
	    if (ch == 27)
	    {
		exit(0);
	    }

	    if (ch == 80)
	    {
		for (inc = 1; inc <= 15; inc++)
		{
		    if (getpixel(85 + k - m, 405 - i + j + inc) == 2 || getpixel(85 + k - m, 405 - i + j + inc) == 4 || getpixel(145 + k - m, 405 - i + j + inc) == 2 || getpixel(145 + k - m, 405 - i + j + inc) == 4)
		    {
			chk = 1;
		    }
		}

		if (chk == 0 && 405 - i + j < 470 && 440 - bu2 + bd2 > 350 && 475 - bu3 + bd3 > 350 && ((85 + k - m >= 80 && 145 + k - m <= 150) || (85 + k - m >= 280 && 145 + k - m <= 350) || (85 + k - m >= 480 && 145 + k - m <= 550)))
		{
		    setcolor(2);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 0);
		    floodfill(95 + k - m, 385 - i + j, 2); // for small rectangle
		    setcolor(0);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle

		    j = j + speed;
		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 7); // for middle rectangle

		    setcolor(8);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 8); // for small rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
		chk = 0;
	    }
	    if (ch == 75)
	    {
		if (440 - bu2 + bd2 > 350 && 475 - bu3 + bd3 > 350 && 375 - i + j < 320)
		{
		    setcolor(2);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 0);
		    floodfill(95 + k - m, 385 - i + j, 2); // for small rectangle
		    setcolor(0);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle

		    m = m + speed;
		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 7); // for middle rectangle

		    setcolor(8);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 8); // for small rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
	    }
	    if (ch == 27)
	    {
		goto end;
	    }
	    if (ch == 119)
	    {
		goto second;
	    }
	    if (ch == 101)
	    {
		goto third;
	    }
	}
    }
second:
    // 2nd box
    if (ch == 119)
    {
	while (1)
	{
	    ch = getch();

	    if (ch == 72)
	    {
		for (inc = 1; inc <= 400; inc++)
		{
		    if (getpixel(100 + br2 - bl2, 410 - bu2 + bd2 - inc) == 5 || getpixel(130 + br2 - bl2, 410 - bu2 + bd2 - inc) == 5)
		    {
			chk = 1;
		    }
		}
		if (chk == 0 && 475 - bu3 + bd3 > 350 && 405 - i + j > 350)
		{
		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 0);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(0);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle

		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    bu2 = bu2 + speed;

		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
		chk = 0;
	    }
	    if (ch == 77)
	    {
		if (440 - bu2 + bd2 < 350 && 475 - bu3 + bd3 > 350 && 405 - i + j > 350)
		{
		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 0);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(0);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle

		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    br2 = br2 + speed;

		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
	    }
	    if (ch == 27)
	    {
		exit(0);
	    }

	    if (ch == 80)
	    {
		for (inc = 1; inc <= 400; inc++)
		{
		    if (getpixel(100 + br2 - bl2, 440 - bu2 + bd2 + inc) == 5 || getpixel(130 + br2 - bl2, 440 - bu2 + bd2 + inc) == 5)
		    {
			chk = 1;
		    }
		}
		for (inc = 1; inc <= 10; inc++)
		{
		    if (getpixel(160 + br2 - bl2, 440 - bu2 + bd2 + inc) == 4)
		    {
			chk = 1;
		    }
		}
		if (chk == 0 && 440 - bu2 + bd2 < 470 && 475 - bu3 + bd3 > 350 && 405 - i + j > 350 && ((70 + br2 - bl2 >= 65 && 160 + br2 - bl2 <= 165) || (70 + br2 - bl2 >= 265 && 160 + br2 - bl2 <= 365) || (70 + br2 - bl2 >= 465 && 160 + br2 - bl2 <= 565)))
		{

		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 0);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(0);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle

		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    bd2 = bd2 + 3;

		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
		chk = 0;
	    }
	    if (ch == 75)
	    {
		if (440 - bu2 + bd2 < 350 && 475 - bu3 + bd3 > 350 && 405 - i + j > 350)
		{
		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setfillstyle(1, 0);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(0);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle

		    // line(0, 478, 638, 478); // down line
		    // line(0, 478, 0, 0);     // left line
		    // line(0, 0, 638, 0);     // top line
		    // line(638, 1, 638, 478); // right line
		    bl2 = bl2 + speed;

		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 6); // for big rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(8);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 8); // for middle rectangle
		    setcolor(15);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
	    }
	    if (ch == 27)
	    {
		goto end;
	    }
	    if (ch == 113)
	    {
		goto first;
	    }
	    if (ch == 101)
	    {
		goto third;
	    }
	}
    }
third:
    if (ch == 101)
    {
	while (1)
	{
	    ch = getch();

	    if (ch == 72)
	    {
		for (inc = 1; inc <= 400; inc++)
		{
		    if (getpixel(100 + br3 - bl3, 445 - bu3 + bd3 - inc) == 5 || getpixel(130 + br3 - bl3, 445 - bu3 + bd3 - inc) == 5 || getpixel(100 + br3 - bl3, 445 - bu3 + bd3 - inc) == 2 || getpixel(130 + br3 - bl3, 445 - bu3 + bd3 - inc) == 2)
		    {
			chk = 1;
		    }
		}
		if (chk == 0 && 440 - bu2 + bd2 > 350 && 405 - i + j > 350)
		{
		    setcolor(8);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 0);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 8); // for big rectangle
		    setcolor(0);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle

		    bu3 = bu3 + speed;
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    line(1300, 478, 130, 478);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 6); // for middle rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(9);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 9); // for big rectangle
		    setcolor(15);

		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
		chk = 0;
	    }
	    if (ch == 77)
	    {
		if (440 - bu2 + bd2 > 350 && 405 - i + j > 350 && 475 - bu3 + bd3 < 350)
		{
		    line(0, 478, 638, 478); // down line
		    line(0, 478, 0, 0);     // left line
		    line(0, 0, 638, 0);     // top line
		    line(638, 1, 638, 478); // right line

		    setcolor(8);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 0);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 8); // for big rectangle
		    setcolor(0);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle

		    br3 = br3 + speed;
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    line(1300, 478, 130, 478);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 6); // for middle rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(9);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 9); // for big rectangle
		    setcolor(15);

		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
	    }
	    if (ch == 27)
	    {
		goto end;
	    }

	    if (ch == 80)
	    {
		for (inc = 1; inc <= 400; inc++)
		{
		    if (getpixel(100 + br3 - bl3, 445 - bu3 + bd3 + inc) == 5 || getpixel(130 + br3 - bl3, 445 - bu3 + bd3 + inc) == 5 || getpixel(100 + br3 - bl3, 445 - bu3 + bd3 + inc) == 2 || getpixel(130 + br3 - bl3, 445 - bu3 + bd3 + inc) == 2)
		    {
			chk = 1;
		    }
		}
		if (chk == 0 && 440 - bu2 + bd2 > 350 && 405 - i + j > 350 && 475 - bu3 + bd3 < 470 && ((55 + br3 - bl3 >= 50 && 175 + br3 - bl3 <= 180) || (55 + br3 - bl3 >= 250 && 175 + br3 - bl3 <= 380) || (55 + br3 - bl3 >= 450 && 175 + br3 - bl3 <= 580)))
		{
		    setcolor(8);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 0);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 8); // for big rectangle
		    setcolor(0);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle

		    bd3 = bd3 + speed;
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    line(1300, 478, 130, 478);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 6); // for middle rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(9);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 9); // for big rectangle
		    setcolor(15);

		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
		chk = 0;
	    }
	    if (ch == 75)
	    {
		if (440 - bu2 + bd2 > 350 && 405 - i + j > 350 && 475 - bu3 + bd3 < 350)
		{
		    setcolor(8);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 0);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 8); // for big rectangle
		    setcolor(0);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle

		    bl3 = bl3 + speed;
		    setcolor(3);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);
		    line(1300, 478, 130, 478);
		    setfillstyle(1, 15);
		    floodfill(101, 351, 3); // top left
		    floodfill(101, 477, 3); // bottom left
		    floodfill(101, 414, 3); // middle left
		    floodfill(129, 351, 3); // top right
		    floodfill(129, 477, 3); // bottom right
		    floodfill(129, 414, 3); // middle right
		    floodfill(101, 382, 3); // middle middle left
		    floodfill(101, 445, 3); // middle middle left
		    floodfill(129, 382, 3); // middle middle right
		    floodfill(129, 445, 3); // middle middle right

		    setcolor(15);
		    line(100, 350, 130, 350);
		    line(100, 478, 100, 350); // first tower
		    line(130, 478, 130, 350);

		    setcolor(3);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);
		    setfillstyle(1, 15);
		    floodfill(301, 351, 3); // top left
		    floodfill(301, 477, 3); // bottom left
		    floodfill(301, 414, 3); // middle left
		    floodfill(329, 351, 3); // top right
		    floodfill(329, 477, 3); // bottom right
		    floodfill(329, 414, 3); // middle right
		    floodfill(301, 382, 3); // middle middle left
		    floodfill(301, 445, 3); // middle middle left
		    floodfill(329, 382, 3); // middle middle right
		    floodfill(329, 445, 3); // middle middle right

		    setcolor(15);
		    line(300, 478, 300, 350); // second tower
		    line(330, 478, 330, 350);
		    line(300, 350, 330, 350);

		    setcolor(3);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);
		    setfillstyle(1, 15);
		    floodfill(501, 351, 3); // top left
		    floodfill(501, 477, 3); // bottom left
		    floodfill(501, 414, 3); // middle left
		    floodfill(529, 351, 3); // top right
		    floodfill(529, 477, 3); // bottom right
		    floodfill(529, 414, 3); // middle right
		    floodfill(501, 382, 3); // middle middle left
		    floodfill(501, 445, 3); // middle middle left
		    floodfill(529, 382, 3); // middle middle right
		    floodfill(529, 445, 3); // middle middle right
		    setcolor(15);
		    line(500, 478, 500, 350); // third tower
		    line(530, 478, 530, 350);
		    line(500, 350, 530, 350);

		    setcolor(6);
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    setcolor(7);
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j); // small rectangle
		    setfillstyle(1, 2);
		    floodfill(80 + br2 - bl2, 420 - bu2 + bd2, 6); // for middle rectangle
		    setfillstyle(1, 5);
		    floodfill(95 + k - m, 385 - i + j, 7); // for small rectangle

		    setcolor(9);
		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    setfillstyle(1, 4);
		    floodfill(60 + br3 - bl3, 450 - bu3 + bd3, 9); // for big rectangle
		    setcolor(15);

		    rectangle(55 + br3 - bl3, 475 - bu3 + bd3, 175 + br3 - bl3, 445 - bu3 + bd3); // big rectangle
		    rectangle(70 + br2 - bl2, 440 - bu2 + bd2, 160 + br2 - bl2, 410 - bu2 + bd2); // middle rectanhle
		    rectangle(85 + k - m, 405 - i + j, 145 + k - m, 375 - i + j);                 // small rectangle
		}
	    }
	    if (ch == 27)
	    {
		goto end;
	    }
	    if (ch == 113)
	    {
		goto first;
	    }
	    if (ch == 119)
	    {
		goto second;
	    }
	}
    }
win:
    cleardevice();
    if(abc == 1){
    while(ch != 27) {
    ch = getch();

    setcolor(9);
    settextstyle(1, 0, 5);
    outtextxy(180, 200, "WINNER");
    }
    }
    cleardevice();
end:
}
void help()
{

    char show[] = "\n\n\n\nAnimation shortcuts -->\n\t\tEsc = Exit animation\n\t\tEnter = Play or Stop Animation\n\nGAME SHORTCUTS -->\n\t\tQ = First Box \n\t\tW = Second Box\n\t\tE = Third Box \n\t\tARROWS = To Control Boxes\n\t\tEsc = Exit game";
    int i = 0;
    cleardevice();
    while (show[i] != '\0')
    {
	printf("%c", show[i]);
	delay(90);
	i++;
    }
    delay(1);
    getch();
    cleardevice();
}
void main()
{
    int gd = DETECT, gm;
    int ch;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(9);
    settextstyle(1, 0, 5);
    outtextxy(180, 200, "WELCOME");
    getch();
    cleardevice();

    setcolor(4);
    settextstyle(1, 0, 5);
    outtextxy(140, 200, "TOWER OF HANOI");
    getch();
    cleardevice();

    setcolor(3);
    settextstyle(1, 0, 5);
    outtextxy(50, 110, "CREATED BY :");
    setcolor(2);
    outtextxy(120, 170, "* KSHIRSAGAR YOGESH");
    outtextxy(120, 210, "* JOSHI SAMARTH");
    outtextxy(120, 250, "* PATIL YASH");
    getch();
    cleardevice();
    do
    {
	setcolor(5);
	settextstyle(1, 0, 5);
	outtextxy(50, 110, "1.ANIMATION");
	outtextxy(50, 150, "2.PLAY");
	outtextxy(50, 190, "3.HELP");
	outtextxy(50, 230, "4.EXIT");
	ch = getch();
	cleardevice();
	switch (ch)
	{
	case 49:
	    animation();
	    cleardevice();
	    break;
	case 50:
	    play();
	    break;
	case 51:
	    help();
	    break;
	}
    } while (ch != 52);
    setcolor(9);
    settextstyle(1, 0, 5);
    outtextxy(180, 200, "THANK YOU");
    outtextxy(180, 240, "VISIT AGAIN");

    getch();
    cleardevice();

    closegraph();
}