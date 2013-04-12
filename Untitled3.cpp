#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
char x;
char c1;
char c2;
char c3;
char c4;
int noc;//number of cards
int noc2;//number of cards for player
int noc3;//  || for split
int a; //sum of hand1
int ans;//interchangable used for specific functions where ever needed
int b;//sum of hand2
int b2;//sum of 3rd hand if split
int hand = 1;
int c;//card value added for hand1
int d;//card value added for hand  int e;//next card suite
int f;// next card value
int h;//decides if dealer hits or stays
double w = 0;//wins     default 0
double t = 0;//ties          ||
double l = 0;//losses        ||
bool gamerun;
bool split = false;
int aa;//tracks Aces
int bb;//tracks 2's
int cc;//tracks 3's
int dd;//tracks 4's
int ee;//tracks 5's
int ff;//tracks 6's
int gg;//tracks 7's
int hh;//tracks 8's
int ii;//tracks 9's
int jj;//tracks 10's
int kk;//tracks Jacks
int ll;//tracks Queens
int mm;//tracks Kings
int nn;//dealer's initial card
int oo;//dealer's 2nd initial card
int pp;//player's initial card
int qq;//player's second initial card
int main(){
    cout << "DH = Dealer's Hand\nDT = Dealer's Total\nYH = Your Hand\nYT = Your Total\nW = Wins\nT = Ties\nL = Losses\n \nh is hit\ns is stay\nq is quit\n1 is 1\n11 is 11";
    cin >> x;
    system("cls");
    srand(time(0));
    gamerun = true;
    while(gamerun==true){
    start:{
        noc = 2;
        noc2 = 2;
        noc3 = 2;
        aa = 0;
        bb = 0;
        cc = 0;
        dd = 0;
        ee = 0;
        ff = 0;
        gg = 0;
        hh = 0;
        ii = 0;
        jj = 0;
        kk = 0;
        ll = 0;
        mm = 0;
        a = 0;
        b = 0;
        b2 = 0;
        hand = 1;
        split = false;
        nn = rand()%13 + 1;
        oo = rand()%13 + 1;
        pp = rand()%13 + 1;
        qq = rand()%13 + 1;
        if(nn==1){
            c1 = 'A';}
        if(nn==2){
            c1 = '2';}
        if(nn==3){
            c1 = '3';}
        if(nn==4){
            c1 = '4';}
        if(nn==5){
            c1 = '5';}
        if(nn==6){
            c1 = '6';}
        if(nn==7){
            c1 = '7';}
        if(nn==8){
            c1 = '8';}
        if(nn==9){
            c1 = '9';}
        if(nn==10){
            c1 = 'T';}
        if(nn==11){
            c1 = 'J';}
        if(nn==12){
            c1 = 'Q';}
        if(nn==13){
            c1 = 'K';}
        if(oo==1){
            c2 = 'A';}
        if(oo==2){
            c2 = '2';}
        if(oo==3){
            c2 = '3';}
        if(oo==4){
            c2 = '4';}
        if(oo==5){
            c2 = '5';}
        if(oo==6){
            c2 = '6';}
        if(oo==7){
            c2 = '7';}
        if(oo==8){
            c2 = '8';}
        if(oo==9){
            c2 = '9';}
        if(oo==10){
            c2 = 'T';}
        if(oo==11){
            c2 = 'J';}
        if(oo==12){
            c2 = 'Q';}
        if(oo==13){
            c2 = 'K';}
        if(pp==1){
            c3 = 'A';}
        if(pp==2){
            c3 = '2';}
        if(pp==3){
            c3 = '3';}
        if(pp==4){
            c3 = '4';}
        if(pp==5){
            c3 = '5';}
        if(pp==6){
            c3 = '6';}
        if(pp==7){
            c3 = '7';}
        if(pp==8){
            c3 = '8';}
        if(pp==9){
            c3 = '9';}
        if(pp==10){
            c3 = 'T';}
        if(pp==11){
            c3 = 'J';}
        if(pp==12){
            c3 = 'Q';}
        if(pp==13){
            c3 = 'K';}
        if(qq==1){
            c4 = 'A';}
        if(qq==2){
            c4 = '2';}
        if(qq==3){
            c4 = '3';}
        if(qq==4){
            c4 = '4';}
        if(qq==5){
            c4 = '5';}
        if(qq==6){
            c4 = '6';}
        if(qq==7){
            c4 = '7';}
        if(qq==8){
            c4 = '8';}
        if(qq==9){
            c4 = '9';}
        if(qq==10){
            c4 = 'T';}
        if(qq==11){
            c4 = 'J';}
        if(qq==12){
            c4 = 'Q';}
        if(qq==13){
            c4 = 'K';}
        system("cls");
        cout << "DH: DT: YH: YT:       W: T: L:\n";
        cout << "*" << "       " << c3 << "             " << w << "  " << t << "  " << l << "\n";
        cout << c2 << "       " << c4 << "\n";
        if(pp==qq){
            cout << "Do you want to split?\n(y/n)\n";
            cin >> x;
            if(x=='y'){
                split = true;}
            else{
            goto counting;}}
        counting:{
        if(pp==1){
        aa++;
            pr3:{
                cout << "Should the ace be 1 or 11\n(type 1 or 11)\n";
                cin >> ans;
                if(ans==1 || ans==11){
                    pp = ans;
                    cout << "        (" << ans << ")\n";
                    goto pr4;}
                else{
                    cout << "Not an option\n"; 
                    goto pr3;}}}
        pr4:{
        if(qq==1){
         aa++;
                pr5:{
                cout << "Should the ace be 1 or 11\n(type 1 or 11)\n";
                cin >> ans;
                if(ans==1 || ans==11){
                    qq = ans;
                    cout << "        (" << ans << ")\n";
                    goto starting;}
                else{
                    cout << "Not an option\n"; 
                    goto pr5;}}}}
        if(nn==1){
            aa++;
            nn = 1;}
        if(nn<=10){
            nn = nn;
            if(nn==2){
                bb++;} 
            if(nn==3){
                cc++;}
            if(nn==4){
                dd++;}
            if(nn==5){
                ee++;}
            if(nn==6){
                ff++;}
            if(nn==7){
                gg++;}
            if(nn==8){
                hh++;}
            if(nn==9){
                ii++;}
            if(nn==10){
                jj++;}}
        if(nn>10){
            nn = 10;
            if(nn==11){
                kk++;}
            if(nn==12){
                ll++;}
            if(nn==13){
                mm++;}}
        if(oo==1){
            oo = 11;
            aa++;}
        if(oo<=10){
            oo = oo;
            if(oo==2){
                bb++;}
            if(oo==3){
                cc++;}
            if(oo==4){
                dd++;}
            if(oo==5){
                ee++;}
            if(oo==6){
                ff++;}
            if(oo==7){
                gg++;}
            if(oo==8){
                hh++;}
            if(oo==9){
                ii++;}
            if(oo==10){
                jj++;}}
        if(oo>10){
            oo = 10;
            if(oo==11){
                kk++;}
            if(oo==12){
                ll++;}
            if(oo==13){
                mm++;}}            
        if(pp<=10){
            pp = pp;
            if(pp==2){
                bb++;} 
            if(pp==3){
                cc++;}
            if(pp==4){
                dd++;}
            if(pp==5){
                ee++;}
            if(pp==6){
                ff++;}
            if(pp==7){
                gg++;}
            if(pp==8){
                hh++;}
            if(pp==9){
                ii++;}
            if(pp==10){
                jj++;}}
        if(pp>10){
            pp = 10;
            if(pp==11){
                kk++;}
            if(pp==12){
                ll++;}
            if(pp==13){
                mm++;}}
        if(qq<=10){
            qq = qq;
            if(qq==2){
                bb++;}
            if(qq==3){
                cc++;}
            if(qq==4){
                dd++;}
            if(qq==5){
                ee++;}
            if(qq==6){
                ff++;}
            if(qq==7){
                gg++;}
            if(qq==8){
                hh++;}
            if(qq==9){
                ii++;}
            if(qq==10){
                jj++;}}
        if(qq>10){
            qq = 10;
            if(qq==11){
                kk++;}
            if(qq==12){
                ll++;}
            if(qq==13){
                mm++;}}
                goto starting;}
        starting:{
        a = nn + oo;
        if(split==false){
        b = pp + qq;}
        else{
        b = pp;
        b2 = qq;}
        cout << "            " << b << endl;}}
        player:{
        cin >> x;
        if(x=='q'){
            goto end2;}
        if(x=='h'){
            if(hand==1){
            noc2++;}
            else{
            noc3++;}
            random:{
            f = rand()%13+1;}
            if(f==1){
                if(aa<4){
                    aa++;
                    pro:{
                    cout << "Should the Ace be 1 or 11\n(type 1 or 11)";
                    cin >> ans;
                    if(ans==1 || ans==11){
                        cout << "        A (" << ans << ")";
                        f = ans;}
                    else{
                        cout << "Not an option\n";
                        goto pro;}}}
                else{
                    goto random;}}
            else{
                if(f<=10){
                    if(f==2){
                        if(bb<4){
                            cout << "        " << f;
                            bb++;}
                        else{
                            goto random;}}
                    if(f==3){
                        if(cc<4){
                            cout << "        " << f;
                            cc++;}
                        else{
                            goto random;}}
                    if(f==4){
                        if(dd<4){
                            cout << "        " << f;
                            dd++;}
                        else{
                            goto random;}}
                    if(f==5){
                        if(ee<4){
                            cout << "        " << f;
                            ee++;}
                        else{
                            goto random;}}
                    if(f==6){
                        if(ff<4){
                            cout << "        " << f;
                            ff++;}
                        else{
                            goto random;}}
                    if(f==7){
                        if(gg<4){
                            cout << "        " << f;
                            gg++;}
                        else{
                            goto random;}}
                    if(f==8){
                        if(hh<4){
                            cout << "        " << f;
                            hh++;}
                        else{
                            goto random;}}
                    if(f==9){
                        if(ii<4){
                            cout << "        " << f;
                            ii++;}
                        else{
                            goto random;}}
                    if(f==10){
                        if(jj<4){
                            cout << "        T";
                            jj++;}
                        else{
                            goto random;}}}
                else{
                    if(f==11){
                        if(kk<4){
                            cout << "        J";
                            kk++;}
                        else{
                            goto random;}}
                    if(f==12){
                        if(ll<4){
                            cout << "        Q";
                            ll++;}
                        else{
                            goto random;}}
                    if(f==13){
                        if(mm<4){
                            cout << "         K";
                            mm++;}
                        else{
                            goto random;}}
                            f = 10;}}
            if(hand==1){
            b = b + f;
            cout << "    " << b << "\n";
            if(b>21&&split==false){
                goto end;}
            if(b>21&&split==true){
                hand = 2;
                cout << "Your second total will now be shown and added to\n       " << b2 << "\n";}
                goto player;}
            else{
            b2 = b2 + f;
            cout << "       " << b2 << "\n";
            if(b2>21){
                goto end;}
            goto player;}}
        if(x=='s'){
            if(split==false){
            goto dealer;}
            else{
            if(split==true&&hand==1){
            hand = 2;
            cout << "Your second total will now be shown and added to\n       " << b2 << "\n";
            goto player;}
            else{
            goto dealer;
            }}}}
        dealer:{
            if(a<17){
                noc++;
                random2:{
                f = rand()%13+1;}
                if(f==1){
                    if(aa<4){
                        aa++;
                        if(a+11<=21){
                            ans = 11;}
                        else{
                            ans = 1;}
                        cout << "A (" << ans << ")";
                        f = ans;}
                    else{
                        goto random2;}}
                else{
                    if(f<=10){
                        if(f==2){
                            if(bb<4){
                                cout << f;
                                bb++;}
                            else{
                                goto random2;}}
                        if(f==3){
                            if(cc<4){
                                cout << f;
                                cc++;}
                            else{
                                goto random2;}}
                        if(f==4){
                            if(dd<4){
                                cout << f;
                                dd++;}
                            else{
                                goto random2;}}
                        if(f==5){
                            if(ee<4){
                                cout << f;
                                ee++;}
                            else{
                                goto random2;}}
                        if(f==6){
                            if(ff<4){
                                cout << f;
                                ff++;}
                            else{
                                goto random2;}}
                        if(f==7){
                            if(gg<4){
                                cout << f;
                                gg++;}
                            else{
                                goto random2;}}
                        if(f==8){
                            if(hh<4){
                                cout << f;
                                hh++;}
                            else{
                                goto random2;}}
                        if(f==9){
                            if(ii<4){
                                cout << f;
                                ii++;}
                            else{
                                goto random2;}}
                        if(f==10){
                            if(jj<4){
                                cout << "T";
                                jj++;}
                            else{
                                goto random2;}}}
                    else{
                        if(f==11){
                            if(kk<4){
                                cout << "J";
                                kk++;}
                            else{
                                goto random2;}}
                        if(f==12){
                            if(ll<4){
                                cout << "Q";
                                ll++;}
                            else{
                                goto random2;}}
                        if(f==13){
                            if(mm<4){
                                cout << "K";
                                mm++;}
                            else{
                                goto random2;}}
                                f = 10;}}
                a = a + f;
                cout << "\n";
                if(a>21){
                    goto end;}
                else{
                    goto dealer;}}
            else{
                goto end;}}
    end:{
        int dec2;//used to compare the number of cards in the hand chosen to the number of cards in the dealers hand if there is a tie
        int dec;//used to decide the best hand to use against dealer if player split
        if(split==true){
            if((21-b)<=(21-b2) && b<=21){
                dec = b;
                dec2 = noc2;}
            if((21-b2)<=(21-b) && b2<=21){
                dec = b2;
                dec2 = noc3;}
            if(b2>21 && b>21){
                if(b<=b2){
                    dec = b;
                    dec2 = noc2;}
                else{
                    dec = b2;
                    dec2 = noc3;}}}
        else{
        dec = b;
        dec2 = noc2;}
        if(a<=21 && dec<=21){
            if(a>dec){
                l++;
                cout << "\n \nDealer Wins\nYou Lose\n \n";}
            if(dec>a){
                w++;
                cout << "\n \nYou Win\nDealer Loses\n \n";}
            if(dec==a){
                if(dec2==noc){
                    t++;
                    cout << "\n \nIt's a Tie!\n \n";}
                else{
                    if(dec2<noc){
                        w++;
                        cout << "\n \nYou Win\nDealer Loses\n \nIt was a tie, but You Had Less Cards\n \n";}
                    else{
                        l++;
                        cout << "\n \nDealer Wins\nYou Lose\n \nIt was a tie, but You had more cards\n \n";}}}}
        else{
            if(dec>21){
                l++;
                cout << "\n \nYou Busted\n \nYou Lose :(\n \n";}
            if(a>21){
                w++;
                cout << "\n \nDealer Busted\n \nYou win!!!!!\n \n";}}
        cout << "Dealer's First Card: " << c1 << "\n \nDealer's Total: " << a << "\n \nNumber of cards in Dealer's hand: "<< noc << "\n \nYour Total: " << b << "\n \nNumber of Cards in your hand: " << noc2 << "\n \n";}
        if(split==true){
        cout << "Your Second Total: " << b2 << "\n \nNumber of Cards in second hand: " << noc3 << "\n \n";}
        cout << "Would you like to play again? (y/n)\n";
        cin >> x;
        if(x=='n'){
            goto end2;}
        else{
        goto start;}
    end2:{
         gamerun = false;}}
         return 0;}