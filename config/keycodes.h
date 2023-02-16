
#define _________ &none
#define X_______X &trans
#define ___TEMP__ &none

#define ____A____ &kp A
#define ____B____ &kp B
#define ____C____ &kp C
#define ____D____ &kp D
#define ____E____ &kp E
#define ____F____ &kp F
#define ____G____ &kp G
#define ____H____ &kp H
#define ____I____ &kp I
#define ____J____ &kp J
#define ____K____ &kp K
#define ____L____ &kp L
#define ____M____ &kp M
#define ____N____ &kp N
#define ____O____ &kp O
#define ____P____ &kp P
#define ____Q____ &kp Q
#define ____R____ &kp R
#define ____S____ &kp S
#define ____T____ &kp T
#define ____U____ &kp U
#define ____V____ &kp V
#define ____W____ &kp W
#define ____X____ &kp X
#define ____Y____ &kp Y
#define ____Z____ &kp Z
#define ____1____ &kp NUMBER_1
#define ____2____ &kp NUMBER_2
#define ____3____ &kp NUMBER_3
#define ____4____ &kp NUMBER_4
#define ____5____ &kp NUMBER_5
#define ____6____ &kp NUMBER_6
#define ____7____ &kp NUMBER_7
#define ____8____ &kp NUMBER_8
#define ____9____ &kp NUMBER_9
#define ____0____ &kp NUMBER_0

#define _PERCENT_ &kp LS(NUMBER_5)
#define __SLASH__ &kp LS(NUMBER_7)      //  /
#define __BSLASH_ &kp RA(GRAVE)         //  
#define _ASTRSK__ &kp LS(RIGHT_BRACKET) // *
//#define _MULTDIV_ &kp 
#define _EXCLAM__ &kp LS(NUMBER_1)      // !
#define _OEXCLAM_ &kp EQUAL             // ¡
#define ___PLUS__ &kp RIGHT_BRACKET     // +
#define __MINUS__ &kp SLASH             // -
#define __EQUAL__ &kp LS(NUMBER_0)
#define ___EUR___ &kp RA(NUMBER_5)
//#define _APPROX__ &kp                 // ~ ±
#define __UNDSC__ &kp LS(SLASH)
//#define _LSSEQUL_ &kp 




#define ___TAB___ &kp TAB
#define __LSHFT__ &kp LSHIFT
#define __RSHFT__ &kp RSHIFT
#define __LCTRL__ &kp LCTRL
#define __RCTRL__ &kp RCTRL
#define ___LALT__ &kp LALT
#define ___RALT__ &kp RALT
#define __BKSPC__ &kp BACKSPACE
#define ___DEL___ &kp DELETE
#define __ENTER__ &kp ENTER
#define __LWIN___ &kp LEFT_WIN
#define __RWIN___ &kp RIGHT_WIN
#define __MENU___ &kp K_CONTEXT_MENU
#define ___ESC___ &kp ESC
#define __COMMA__ &kp COMMA
#define ___DOT___ &kp DOT
#define ___SPC___ &kp SPACE
#define ___RPT___ &key_repeat

#define KC_QUEST LS(MINUS)              //  ?
#define __QUEST__ &kp KC_QUEST          //  ?
#define KC_OQUEST LS(PLUS)              //  ¿
#define _OQUEST__ &kp KC_OQUEST         //  ¿
#define KC_QUOT   MINUS                 //  '
#define __QUOT___ &kp KC_QUOT           //  '
#define KC_DQUOT  LS(NUMBER_2)      //  "
#define __DQUOT__ &kp KC_DQUOT      //  "
#define KC_ACUTE  LS(LEFT_BRACKET)  //  ^ → SPC   macro is needed
#define __ACUTE__ &kp KC_ACUTE  //  ^ → SPC   macro is needed
#define KC_ORDINAL GRAVE             //  º
#define _ORDINAL_ &kp KC_ORDINAL             //  º

// LAYER TAPS
#define _NAVREP__ &lt NAV &repeat_macro
#define _NUMSPC__ &lt NUM SPACE


#define __ALTAB__ &mt LALT TAB



#define __REDO___ &kp LC(Y)
#define __UNDO___ &kp LC(Z)
#define ___CUT___ &kp LC(X)
#define __COPY___ &kp LC(C)
#define __PASTE__ &kp LC(V)

#define __LEFT___ &kp LEFT_ARROW
#define __DOWN___ &kp DOWN_ARROW
#define ___UP____ &kp UP_ARROW
#define __RIGHT__ &kp RIGHT_ARROW
#define __INSRT__ &kp INSERT
#define ___INI___ &kp HOME
#define ___END___ &kp END
#define __PGUP___ &kp PAGE_UP
#define __PGDN___ &kp PAGE_DOWN


#define __TEST1__ &mm_quote_accent
#define __TEST2__ &mm_dquote_acute
#define __TEST3__ &ht_quotes_accent


#define __BOOTL__ &bootloader
