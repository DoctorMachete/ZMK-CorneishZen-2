
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
#define ___KP1___ &kp KP_NUMBER_1
#define ___KP2___ &kp KP_NUMBER_2
#define ___KP3___ &kp KP_NUMBER_3
#define ___KP4___ &kp KP_NUMBER_4
#define ___KP5___ &kp KP_NUMBER_5
#define ___KP6___ &kp KP_NUMBER_6
#define ___KP7___ &kp KP_NUMBER_7
#define ___KP8___ &kp KP_NUMBER_8
#define ___KP9___ &kp KP_NUMBER_9
#define ___KP0___ &kp KP_NUMBER_0
#define __KPDOT__ &kp KP_DOT
#define __KPENT__ &kp KP_ENTER
#define ___F1____ &kp F1
#define ___F2____ &kp F2
#define ___F3____ &kp F3
#define ___F4____ &kp F4
#define ___F5____ &kp F5
#define ___F6____ &kp F6
#define ___F7____ &kp F7
#define ___F8____ &kp F8
#define ___F9____ &kp F9
#define ___F10___ &kp F10
#define ___F11___ &kp F11
#define ___F12___ &kp F12
#define ___F13___ &kp F13
#define ___F14___ &kp F14
#define ___F15___ &kp F15
#define ___F16___ &kp F16
#define ___F17___ &kp F17
#define ___F18___ &kp F18
#define ___F19___ &kp F19
#define ___F20___ &kp F20
#define ___F21___ &kp F21
#define ___F22___ &kp F22
#define ___F23___ &kp F23
#define ___F24___ &kp F24




#define KC_PERCENT   LS(NUMBER_5)            // %
#define _PERCENT_    &kp KC_PERCENT          // %
#define KC_SLASH     LS(NUMBER_7)            //  /
#define __SLASH__    &kp KC_SLASH            //  /
#define KC_BSLASH    RA(GRAVE)               //  
#define __BSLASH_    &kp KC_BSLASH           //  
#define KC_ASTRSK    LS(RIGHT_BRACKET)       // *
#define _ASTRSK__    &kp KC_ASTRSK           // *
//#define _MULTDIV_ &kp 
#define KC_EXCLAM    LS(NUMBER_1)            // !
#define _EXCLAM__    &kp KC_EXCLAM           // !
#define KC_OEXCLAM   EQUAL                   // ¡
#define _OEXCLAM_    &kp KC_OEXCLAM          // ¡
#define KC_PLUS      RIGHT_BRACKET           // +
#define ___PLUS__    &kp KC_PLUS             // +
#define KC_MINUS     SLASH                   // -
#define __MINUS__    &kp KC_MINUS            // -
#define KC_EQUAL     LS(NUMBER_0)            // =
#define __EQUAL__    &kp KC_EQUAL            // =
#define KC_EUR       RA(NUMBER_5)            // €
#define ___EUR___    &kp KC_EUR              // €
//#define _APPROX__ &kp                      // ~ ±
#define KC_UNDSC     LS(KC_MINUS)        // __
#define __UNDSC__    &kp KC_UNDSC            // __
//#define _LSSEQUL_ &kp 




#define ___TAB___    &kp TAB
#define __LSHFT__    &kp LSHIFT
#define __RSHFT__    &kp RSHIFT
#define __LCTRL__    &kp LCTRL
#define __RCTRL__    &kp RCTRL
#define ___LALT__    &kp LALT
#define ___RALT__    &kp RALT
#define __BKSPC__    &kp BACKSPACE
#define ___DEL___    &kp DELETE
#define __ENTER__    &kp ENTER
#define __LWIN___    &kp LEFT_WIN
#define __RWIN___    &kp RIGHT_WIN
#define _OSSHIFT_     &ht_custom_tap_sk LSHIFT LSHIFT
#define __OSALT__     &ht_custom_tap_sk LALT LALT
#define __OSCTL__     &ht_custom_tap_sk LCTRL LCTRL

#define __MENU___    &kp K_CONTEXT_MENU
#define ___ESC___    &kp ESC
#define __COMMA__    &kp COMMA
#define ___DOT___    &kp DOT
#define ___SPC___    &kp SPACE
#define ___RPT___    &key_repeat
#define _CAPSLCK_    &kp CAPSLOCK

#define KC_QUEST     LS(MINUS)             //  ?
#define __QUEST__    &kp KC_QUEST          //  ?
#define KC_OQUEST    LS(PLUS)              //  ¿
#define _OQUEST__    &kp KC_OQUEST         //  ¿
#define KC_QUOT      MINUS                 //  '
#define __QUOT___    KC_QUOT               //  ' `
#define KC_DQUOT     LS(NUMBER_2)          //  "
#define __DQUOT__    &kp KC_DQUOT          //  "
#define KC_ACCENT    LEFT_BRACKET          //  ^ → SPC   macro is needed
#define KC_ACUTE     LS(LEFT_BRACKET)      //  ^ → SPC   macro is needed
#define __ACUTE__    &kp KC_ACUTE          //  ^ → SPC   macro is needed
#define KC_ORDINAL    GRAVE                //  º
#define _ORDINAL_    &kp KC_ORDINAL        //  º
#define KC_ACCLTR    APOSTROPHE            //  ´


#define KC_LPRN      LS(N8)            // (
#define _KC_LPRN_    &kp KC_LPRN            // (
#define KC_RPRN      LS(N9)            // )
#define _KC_RPRN_    &kp KC_RPRN            // )
#define KC_LBRC      RA(KC_ACCENT)     // [
#define _KC_LBRC_    &kp KC_LBRC     // [
#define KC_RBR       RA(KC_PLUS)       // ]
#define _KC_RBRC_    &kp KC_RBR       // ]
#define KC_LCBR      RA(KC_ACCLTR)     // {
#define _KC_LCBR_    &kp KC_LCBR     // {
#define KC_CDILLA    NON_US_HASH           // Ç
#define KC_RCBR      RA(KC_CDILLA)     // }
#define _KC_RCBR_    &kp KC_RCBR     // }

#define __LEFT___    &kp LEFT_ARROW
#define __DOWN___    &kp DOWN_ARROW
#define ___UP____    &kp UP_ARROW
#define __RIGHT__    &kp RIGHT_ARROW
#define __INSRT__    &kp INSERT
#define ___INI___    &kp HOME
#define ___END___    &kp END
#define __PGUP___    &kp PAGE_UP
#define __PGDN___    &kp PAGE_DOWN
#define __BOOTL__    &bootloader
#define __RESET__    &reset
#define _BT__CLR_    &bt BT_CLR
#define __BT__1__    &bt BT_SEL 0
#define __BT__2__    &bt BT_SEL 1
#define __BT__3__    &bt BT_SEL 2
#define __BT__4__    &bt BT_SEL 3
#define __BT__5__    &bt BT_SEL 4
#define __MUTE___    &kp C_MUTE
#define __MPREV__    &kp C_PREVIOUS
#define __MPLAY__    &kp C_PLAY_PAUSE
#define __MPNXT__    &kp C_NEXT
#define __VOLUP__    &kp C_VOL_UP
#define __VOLDN__    &kp C_VOL_DN


#define __REDO___    &kp LC(Y)
#define __UNDO___    &kp LC(Z)
#define ___CUT___    &kp LC(X)
#define __COPY___    &kp LC(C)
#define __PASTE__    &kp LC(V)
#define _SLCTALL_    &kp LC(A)
#define _PRNTSCN_    &kp PRINTSCREEN
#define _SNIPSCN_    &kp LG(LS(S))

// LAYER TAPS
#define _NAVREP__    &td_nav_rep_npad_togglenpad      // NAV-REP + NPADoREP + TOGGLENPAD
#define _NUMSPC__    &td_num_spc_npad_togglenpad
#define _NPADKP0_    &ht_custom_tog_tap NPAD KP_NUMBER_0
#define _SFTFUNC_    &td_shift_func_capslock
#define XTRABKSPC    &ht_extra_backspace_delete EXTRA 0

// MOD TAPS
#define __ALTAB__ &mt LALT TAB
#define _RCTLACC_ &ht_custom_mod_toggle RCTRL ACCENTS     // RCTRL → TOGGLE LANGUAGE LAYER
//#define _RCTLACC_ &ht_custom_mod_toggle RCTRL ACCENTS     // RCTRL → TOGGLE LANGUAGE LAYER
//#define _SFTBSPC_ &mt LSHIFT BACKSPACE
#define _SFTBENT_ &mt LSHIFT KP_ENTER
#define _LANLOCK_ &mt LALT KP_NUMLOCK
#define _RALTENT_ &mt RALT ENTER


// MOD MORPHS
#define _BKSPCDL_ &mm_backspace_delete


// ACCENTS
//#define __ACC_A__ &ht_accent_a mm_accent_a A
#define __ACC_A__ &ht_accent_a 0 A
#define __ACC_E__ &ht_accent_e 0 E
#define __ACC_I__ &ht_accent_i 0 I
#define __ACC_O__ &ht_accent_o 0 O
#define __ACC_U__ &td_accent_dier_u
#define KC_ENE    SEMICOLON
#define _ACC_ENE_ &ht_custom_tap_tap KC_ENE N // &kp KC_ENE



// HOLD TO TAP
#define _QUOTACC_ &ht_quotes_accent 0 0     //  ' ` " ^
#define _SLSHCOM_ &ht_slash_comments 0 0    // SLASH + open/close comments macro
#define _QUSTCLM_ &ht_quest_exclam 0 0      //  ? ¿ ! ¡
//#define _CPYSLAL_ &ht_hold_to_tap LC(A) LC(C)   //  COPY → SELECTALL
//#define _PASTEF2_ &ht_hold_to_tap F2 LC(V)   //  PASTE → F2
//#define _SRCHENT_ &ht_hold_to_tap LC(F) ENTER    //  ENTER → SEARCH
//#define _ESCMENU_ &ht_hold_to_tap K_CONTEXT_MENU ESC   //  MENU → ESC
#define _CPYSLAL_ &ht_custom_tap_tap LC(A) LC(C)   //  COPY → SELECTALL
#define _PASTEF2_ &ht_custom_tap_tap F2 LC(V)   //  PASTE → F2
#define _SRCHENT_ &ht_custom_tap_tap LC(F) ENTER    //  ENTER → SEARCH
#define _ESCMENU_ &ht_custom_tap_tap K_CONTEXT_MENU ESC   //  MENU → ESC
#define _UNDSEQU_ &ht_custom_tap_tap KC_EQUAL KC_UNDSC   //  _ → =
#define _NSLSASK_ &ht_custom_tap_tap KP_ASTERISK KP_SLASH   //  / → *
#define _NPLUSMN_ &ht_custom_tap_tap KP_MINUS KP_PLUS   //  + → -




//#define __TEST1__ &ht_rctl_accents RCTRL ACCENTS
#define __TEST1__    &kp NON_US_HASH    // Ç
#define __TEST2__    &kp RA(NON_US_HASH)          // }
#define __TEST3__    &td_shift_func_capslock
#define __TEST2__    &kp RA(NON_US_HASH)          // }
#define __TEST3__    &kp NON_US_HASH    // Ç


#define __TEST4__ &td_accent_dier_u //&ht_accent_u

#define _TOGNPAD_ &tog NPAD
