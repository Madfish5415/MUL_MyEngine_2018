commit 69fc66f6fe9060d4aa3e96f9034f89ec27cc517e <br>
Merge: f3e8420 0a5a831 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Apr 4 11:56:58 2019 +0200 <br>
 
    Merge branch 'release/1.12.1' 

commit 0a5a8310244af7a1f53c22a558b872a4f477069e <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Apr 4 11:54:42 2019 +0200 <br>
 
    [~] position_utils.c 
    
    position_utils.c : 
    - Fix pos* functions 

commit f3e8420f636f49056d0477c5a609b9a15313f403 <br>
Merge: 74df26f 00dca6c <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Apr 4 11:43:25 2019 +0200 <br>
 
    Merge branch 'release/1.12.0' 

commit 00dca6c0ffaabf41c321d8978d572df96f9f564f <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Apr 4 11:42:55 2019 +0200 <br>
 
    [~] main.c, window.c 
    
    main.c, window.c : 
    - Rename window() --> window_launch() 

commit b863791bb8fd24374fdda9d0becec2413996aceb <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 23:48:31 2019 +0200 <br>
 
    [#] General improvements, add Doxygen documentation 

commit 6787d47cd5b8b735784acf12adaacf44c06dba90 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:59:18 2019 +0200 <br>
 
    [~] scenes/ | [+] Makefile 

commit 43949c3aca3cdc344ccfcdcef30bb129a503d790 <br>
Merge: 0d568ba 37201ff <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:58:51 2019 +0200 <br>
 
    Merge branch 'feature/components' into develop 

commit 37201ff807dbf504a5a2aab0b96e0b4820f28616 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:58:33 2019 +0200 <br>
 
    [~] button.c, text.c, text_list_helpers.c, button.h, value_list.h, components.h 
    
    button.c, text.c : 
    - Replace center* functions by pos* functions 
    
    text_list_helpers.c : 
    - Fix global id selector 
    
    button.h : 
    - Add missing include 
    
    value_list.h : 
    - Correct comments 
    
    components.h : 
    - Add warp and warp_list components header files 

commit 0d568bae84dfa1ef58b7df77ecba319944dabf48 <br>
Merge: c5e5a04 86b5d47 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:56:02 2019 +0200 <br>
 
    Merge branch 'feature/utils' into develop 

commit 86b5d4739fba6b7569ddb9da692597fc5019f4f7 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:54:37 2019 +0200 <br>
 
    [~] position_utils.c, position.h 
    
    position_utils.c : 
    - Add general pos* functions 
    - Replace all center* functions to pos* functions 
    
    position.h : 
    - Add POSITION_TYPE enumeration 
    - Replace all center* function prototypes to pos* function prototypes 

commit c5e5a04a90598742d079fc69aabb335b6dccff59 <br>
Merge: 74df26f 1e6c8bf <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:51:56 2019 +0200 <br>
 
    Merge branch 'feature/components' into develop 

commit 1e6c8bf2030e64613759517ec8a42ca7f811037c <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Apr 3 18:49:13 2019 +0200 <br>
 
    [+] components/engine/, helpers/engine/, include/engine/components/ 
    
    components/engine/, helpers/engine/, include/engine/components/ : 
    - Add warp functions, helpers and prototypes 
    - Add warp_list functions, helpers and prototypes 

commit 74df26fd6f4d35a7c88975b8657168aa8afef020 <br>
Merge: ce2fc86 c14f5ab <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sun Mar 17 12:55:34 2019 +0100 <br>
 
    Merge branch 'release/1.11.2' 

commit c14f5abffbf1fe34737c71126446bf7e66ede538 <br>
Merge: ce2fc86 8a6da3f <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sun Mar 17 12:55:09 2019 +0100 <br>
 
    Merge branch 'feature/rclock' into develop 

commit 8a6da3f1f5c4952d935b80945308e840d90b0301 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sun Mar 17 12:54:54 2019 +0100 <br>
 
    [+] rclock.c, rclock.h, rclock_list_helpers.c, rclock_list.h 
    
    rclock.c : 
    - Add rclock_restart() function 
    
    rclock.h : 
    - Add rclock_restart() function prototype 
    
    rclock_list_helpers.c : 
    - Add rclock_list_restart() helper 
    
    rclock_list.h : 
    - Add rclock_list_restart() helper prototype 

commit ce2fc868780852ecae716611282dd58b87e66891 <br>
Merge: 7de59e7 91e38d0 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sun Mar 17 12:27:29 2019 +0100 <br>
 
    Merge branch 'release/1.11.1' 

commit 91e38d0ca9527e7bffdf2d818ec3015445a47230 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sun Mar 17 12:26:57 2019 +0100 <br>
 
    [~] Update testing scenes/, window.c 

commit 9abfefacf93dbbcf57bf3cc9ae4a6a607f0b862e <br>
Merge: ce5d5bc 3be2810 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sun Mar 17 12:26:24 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit 3be2810aefdb8034aa408da623a0a12fe713241f <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sun Mar 17 12:24:40 2019 +0100 <br>
 
    [~] buttons_manager.c, scenes_manager.c, managers.h 
    
    buttons_manager.c : 
    - Add button_manager_set_value() function 
    
    scenes_manager.c : 
    - Add global parameter to scenes_manager() function 
    
    managers.h : 
    - Add button_manager_set_value() and button_manager_state() function prototypes 
    - Update scenes_manager() function prototype 

commit ce5d5bcb6c6da84cfc8c0df1e573b14ae36f0d12 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sun Mar 17 12:19:56 2019 +0100 <br>
 
    [~] structs.h 
    
    structs.h : 
    - Add global parameter to scene init 

commit 7de59e759ec5e5b44536259a750da7198d6172f5 <br>
Merge: 6032516 3445c09 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:56:51 2019 +0100 <br>
 
    Merge branch 'release/1.11.0' 

commit 3445c0911ecc9f233515adafe6f7e373322a34d8 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:55:52 2019 +0100 <br>
 
    [~] Makefile 

commit bafc6739d7df3b3e82fba203bb48f569e8bf54ab <br>
Merge: ba0d8e2 9308caf <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:55:12 2019 +0100 <br>
 
    Merge branch 'feature/global' into develop 

commit 9308cafbeae9ec42b25b6f4fedad442f676c7533 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:54:47 2019 +0100 <br>
 
    [~] global.c, global.h 
    
    global.c, global.h : 
    - Add data, opts and prms properties 

commit ba0d8e21f005f66e401631025ddf81597b4fa478 <br>
Merge: 18ae7e1 9b75cba <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:53:32 2019 +0100 <br>
 
    Merge branch 'feature/value' into develop 

commit 9b75cba1262373bcb25dc1b907f0fa3e90e6c410 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:53:19 2019 +0100 <br>
 
    [~] value.c, value.h, value_list.c, value_list.h, components.h 
    
    value.c : 
    - Rename option.c --> value.c 
    - Add all property 
    
    value.h : 
    - Rename option.h --> value.h 
    - Add all property 
    
    value_list.c : 
    - Rename option_list.c --> value_list.c 
    
    value_list.h : 
    - Rename option_list.h --> value_list.h 
    
    components.h : 
    - Update value and value_list references 

commit 18ae7e148eefc5838a266afb60b50d71198d2375 <br>
Merge: 5da3af0 2ca82b9 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:41:34 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit 2ca82b9e145aa31a25d906d02ad6adb5d2e6a34d <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:41:17 2019 +0100 <br>
 
    [-] buttons_manager.c, events_manager.c 
    
    buttons_manager.c, events_manager.c : 
    - Remove useless variables 

commit 5da3af03bce203bb33ae9d852c36ba7bfcf62609 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:39:32 2019 +0100 <br>
 
    [~] Update testing scenes/ 

commit 5adc8027367ec642fd7d8fdee55aa19c21db49ee <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:38:55 2019 +0100 <br>
 
    [~] events/, events.h, structs.h 
    
    events/, events.h, structs.h : 
    - Use global component 

commit cbb1daed6191fc44855ac9f8f84089fe00a86b57 <br>
Merge: f88f641 cb03189 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:37:56 2019 +0100 <br>
 
    Merge branch 'feature/utils' into develop 

commit cb0318901a32c166cc2795862d22f8721c4573a5 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:37:46 2019 +0100 <br>
 
    [+] window_utils.c, window.h 
    
    window_utils.c : 
    - Add window_is_visible() function 
    
    window.h : 
    - Add window_is_visible() function prototype 

commit f88f6412779fe4d3414c5083dd826c714c2ca983 <br>
Merge: 89435e7 a9db959 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:36:25 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit a9db959fcb919de4decb3c0b935178b7bef86a2f <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:36:11 2019 +0100 <br>
 
    [~] buttons_manager.c, events_manager.c, scenes_manager.c 
    
    buttons_manager.c, events_manager.c : 
    - Use global component in all functions 
    
    scenes_manager.c : 
    - Fix valgrind errors and rare crashes at scene switch 

commit 89435e776cbca3275631e64883cae8d3db477d42 <br>
Merge: 6befb58 9aa6ce4 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:33:21 2019 +0100 <br>
 
    Merge branch 'feature/scene' into develop 

commit 9aa6ce411a29639b093ac1b1116d82365e750205 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:33:09 2019 +0100 <br>
 
    [-] scene_helpers.c 
    
    scene_helpers.c : 
    - Remove scn->run condition in all functions 

commit 6befb589a15aedae50ba19d77647983c26c3d0b4 <br>
Merge: bba5a51 3ca5723 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:30:52 2019 +0100 <br>
 
    Merge branch 'feature/sound' into develop 

commit 3ca5723a94dcc4ded19ed1b7d43ba7845b68088d <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:30:40 2019 +0100 <br>
 
    [~] sound.c, sound.h, sound_list_helpers.h, sound_list.h 
    
    sound.c : 
    - Add sound_set_volume() function 
    
    sound.h : 
    - Add sound_set_volume() function prototype 
    
    sound_list_helpers.c : 
    - Add sound_list_set_volume() helper 
    
    sound_list.h : 
    - Add sound_list_set_volume() helper prototype 

commit bba5a5156b085225a871303c2ff53feeb9c6f702 <br>
Merge: ef01bcc 985c8ca <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:30:03 2019 +0100 <br>
 
    Merge branch 'feature/music' into develop 

commit 985c8ca2b4c7344f197c1aa119724cbb84753372 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:29:52 2019 +0100 <br>
 
    [~] music.c, music.h, music_list_helpers.h, music_list.h 
    
    music.c : 
    - Add music_set_volume() function 
    
    music.h : 
    - Add music_set_volume() function prototype 
    
    music_list_helpers.c : 
    - Add music_list_set_volume() helper 
    
    music_list.h : 
    - Add music_list_set_volume() helper prototype 

commit ef01bcc4a37bd799fae8a4b4427711609c4e5647 <br>
Merge: a61f628 75c6249 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:26:33 2019 +0100 <br>
 
    Merge branch 'feature/button' into develop 

commit 75c624964578adeeb5f8eb06c21d4ce969a0b863 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:26:19 2019 +0100 <br>
 
    [~] button_helpers.c, button.h, button_list_helpers.c, button_list.h 
    
    button_helpers.c : 
    - Use global component parameter in button_display() function 
    
    button.h : 
    - Update button_display() function prototype 
    
    button_list_helpers.c : 
    - Use global component parameter in button_list_display() function 
    
    button_list.h : 
    - Update button_list_display() function prototype 

commit a61f628ae5890aa2cdd158475333b6d7a39175e6 <br>
Merge: bff2c3e 5ced0fd <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 18:13:01 2019 +0100 <br>
 
    Merge branch 'feature/dyn_sprite' into develop 

commit 5ced0fdb63076e6ebff79c97ae2950996a59ddd8 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 18:12:48 2019 +0100 <br>
 
    [~] dyn_sprite.c, dyn_sprite_helpers.c, dyn_sprite.h, dyn_sprite_list_helpers.c, dyn_sprite_list.h 
    
    dyn_sprite.c : 
    - Update dyn_sprite_calculate() call 
    
    dyn_sprite_helpers.c : 
    - Improve dyn_sprite_calculate() function 
    - Use global component parameter in dyn_sprite_display() function 
    
    dyn_sprite.h : 
    - Update dyn_sprite_calculate() function prototype 
    - Update dyn_sprite_display() function prototype 
    
    dyn_sprite_list_helpers.c : 
    - Use global component parameter in dyn_sprite_list_display() function 
    
    dyn_sprite_list.h : 
    - Update dyn_sprite_list_display() function prototype 

commit bff2c3ecdab6141c0d5ac167cc1dfee7c63f5ece <br>
Merge: 1cbe444 eed3d64 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 17:45:35 2019 +0100 <br>
 
    Merge branch 'feature/text' into develop 

commit eed3d64105065d92dbc7245984a26fe123ec3d5f <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 17:43:04 2019 +0100 <br>
 
    [~] text_helpers.c, text.h, text_list_helpers.c, text_list.h 
    
    text_helpers.c : 
    - Use global component parameter in text_display() function 
    
    text.h : 
    - Update text_display() function prototype 
    
    text_list_helpers.c : 
    - Use global component parameter in text_list_display() function 
    
    text_list.h : 
    - Update text_list_display() function prototype 

commit 1cbe444578f98268981c279d6614dd7d05df34ed <br>
Merge: 6032516 24ab8b1 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 16 17:29:22 2019 +0100 <br>
 
    Merge branch 'feature/sprite' into develop 

commit 24ab8b16803967d72957be813a8f3dfe3b4ce891 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 16 17:26:43 2019 +0100 <br>
 
    [~] sprite_helpers.c, sprite.h, sprite_list_helpers.c, sprite_list.h 
    
    sprite_helpers.c : 
    - Use global component parameter in sprite_display() function 
    
    sprite.h : 
    - Update sprite_display() function prototype 
    
    sprite_list_helpers.c : 
    - Use global component parameter in sprite_list_display() function 
    
    sprite_list.h : 
    - Update sprite_list_display() function prototype 

commit 6032516fce35fa9893f944a99b6961e34a4dcb80 <br>
Merge: 48052ed 1e142f0 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 11:59:24 2019 +0100 <br>
 
    Merge branch 'release/1.10.1' 

commit 1e142f029d6c1718948d9667cfa005a581b7fcb7 <br>
Merge: e5a1b80 7c71e9a <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 11:53:32 2019 +0100 <br>
 
    Merge branch 'feature/global' into develop 

commit 7c71e9a8e5e9c7d2259f34b30ff65581907525ad <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 11:52:10 2019 +0100 <br>
 
    [+] global.c, global.h 
    
    global.c : 
    - Add rect reference 
    
    global.h : 
    - Add rect property 

commit e5a1b803c9d38de6896c881989bb6e2b1c47ed18 <br>
Merge: 701beb2 a977e7b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 11:49:17 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit a977e7b08a77f113459556005710ffaccb27e5b4 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 11:49:04 2019 +0100 <br>
 
    [~] buttons_manager.c 
    
    buttons_manager.c : 
    - Use global component in button_state() function 

commit 701beb2f7f4e71fb9a3b149a427f4c292195ff6a <br>
Merge: 48052ed 85f7235 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 11:47:13 2019 +0100 <br>
 
    Merge branch 'feature/utils' into develop 

commit 85f7235c05215a7dbcdb0dc4596545ade06354a3 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 11:46:57 2019 +0100 <br>
 
    [~] window_utils.c, window.h 
    
    window_utils.c : 
    - Use global component in window_get_mouse_pos() function 
    
    window.h : 
    - Update window_get_mouse_pos() function prototype 

commit 48052edac0abb9266121824eefb17a8c8a9c1e1e <br>
Merge: c8a0eb9 d17d770 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 10:36:15 2019 +0100 <br>
 
    Merge branch 'release/1.10.0' 

commit d17d770e201509933ff456e6fcf304e4d56a2128 <br>
Merge: 44a428b ad1ebcb <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 10:32:55 2019 +0100 <br>
 
    Merge branch 'feature/normez' into develop 

commit ad1ebcb8c7cb313eace48406a4199c2bde673ec9 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 10:32:44 2019 +0100 <br>
 
    [~] Fix norm errors 

commit 44a428b648b7cbb55d182b83f2d7f23d4461aa38 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 10:25:40 2019 +0100 <br>
 
    [+] window.c 
    
    window.c : 
    - Remove framerate limit 

commit c350ec401aa0a474f573985e58535d64861c96f9 <br>
Merge: 1d90d40 8933c60 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 10:24:31 2019 +0100 <br>
 
    Merge branch 'feature/scene' into develop 

commit 8933c604833cbb072d782c7fac58220797ee7867 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 10:24:14 2019 +0100 <br>
 
    [~] Update testing scenes/ 

commit 1d90d4068cfccf994a7ebe836c978e693a172949 <br>
Merge: 47d37f8 2de114b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 10:22:21 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit 2de114bd4754183b2ea947f3e0fabd5266ddd622 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 10:21:42 2019 +0100 <br>
 
    [~] buttons_manager.c 
    
    buttons_manager.c : 
    - Use window_get_mouse_pos() function 

commit 47d37f814697e420b7ce57cdf7a5caeffa8537a3 <br>
Merge: ce7b242 f4ad092 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 10:18:39 2019 +0100 <br>
 
    Merge branch 'feature/data' into develop 

commit f4ad0921e8248272d80f6e43a32e931dbac01824 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 10:18:02 2019 +0100 <br>
 
    [+] data.c, data.h 
    
    data.c : 
    - Add rclock_list reference 
    
    data.h : 
    - Add rclock_list property 

commit ce7b2420589f483ff4d139c8d73507e2dbbed31c <br>
Merge: cad2601 5923993 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 10:14:37 2019 +0100 <br>
 
    Merge branch 'feature/rclock' into develop 

commit 59239933a485c0659426214551c2441371b5ae6e <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 10:14:23 2019 +0100 <br>
 
    [+] rclock.c, rclock.h, rclock_list.c, rclock_list_helpers.c, rclock_list.h, components.h, Makefile 
    
    rclock.c : 
    - Add rclock functions 
    
    rclock.h : 
    - Add rclock function prototypes 
    
    rclock_list.c : 
    - Add rclock_list functions 
    
    rclock_list_helpers.c : 
    - Add rclock_list helpers 
    
    rclock_list.h : 
    - Add rclock_list function prototype 
    - Add rclock_list helper prototype 
    
    components.h : 
    - Add rclock and rclock_list references 

commit cad26014c2677f8ca03d7d8e6888cb2aa81c991b <br>
Merge: 1344ab6 5cf01a7 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Mon Mar 11 09:08:41 2019 +0100 <br>
 
    Merge branch 'feature/utils' into develop 

commit 5cf01a7b06d7ff8ea5d3043fc417f51cb1a96229 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Mon Mar 11 09:08:04 2019 +0100 <br>
 
    [+] window_utils.c, window.h, utils.h, Makefile 
    
    window_utils.c : 
    - Add window_get_mouse_pos() function 
    
    window.h 
    - Add window_get_mouse_pos() function prototype 
    
    utils.h : 
    - Add window utils reference 

commit 1344ab686bf7a11e21d80f75940c328266a71072 <br>
Merge: 85be6aa 31c0fc3 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sun Mar 10 13:53:24 2019 +0100 <br>
 
    Merge branch 'feature/components' into develop 

commit 31c0fc3bb0b224b875c67ff41819a1f8c998070b <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sun Mar 10 13:52:42 2019 +0100 <br>
 
    [+] components/ 
    
    components/ : 
    - Add get and remove functions to all list components 

commit 85be6aa7737ddf482ffbca8e70549db47775d004 <br>
Merge: b89d22c 9135b7b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 18:00:18 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 9135b7ba3a9e9047838887e57fb073184f2abe38 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:59:48 2019 +0100 <br>
 
    [~] Update testing scenes/ 

commit b89d22c9fa9b71212123363239119deda268e485 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:57:22 2019 +0100 <br>
 
    [~] window.c 
    
    window.c : 
    - Add global component support 

commit eb8709a1f5cd20ba3ac5f49d3ac89abf7db86a85 <br>
Merge: 41a5856 c61c7aa <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 17:56:34 2019 +0100 <br>
 
    Merge branch 'feature/modal' into develop 

commit c61c7aa98dcc43893400dfd37bd735aa25672978 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:56:21 2019 +0100 <br>
 
    [~] modal_helpers.c, modal.h, modal_list_helpers, modal_list.h 
    
    modal_helpers.c : 
    - Add global component support 
    
    modal.h : 
    - Update modal linked function prototypes 
    - Update helper prototypes 
    
    modal_list_helpers.c : 
    - Add global component support 
    
    modal_list.h : 
    - Update helper prototypes 

commit 41a585689b30bbfe93235f1a20e6d0c5f2d46fcc <br>
Merge: e62f740 bedfa2c <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 17:43:04 2019 +0100 <br>
 
    Merge branch 'feature/scene' into develop 

commit bedfa2ce7d91301b67ab13783e982a8a60a30c43 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:42:49 2019 +0100 <br>
 
    [~] scene_helpers.c, scene.h 
    
    scene_helpers.c : 
    - Add global component support 
    
    scene.h : 
    - Update scene linked function prototypes 
    - Update helper prototypes 

commit e62f7405c02e3650e692b60aa3323eccb475c540 <br>
Merge: 41801fd 00fbb4f <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 17:40:57 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit 00fbb4fccd0b2db38dd1174b79fbf70cdc74d066 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:40:26 2019 +0100 <br>
 
    [~] buttons_manager.c, scenes_manager.c, managers.h 
    
    buttons_manager.c, scenes_manager.c : 
    - Update global component support 
    
    managers.h : 
    - Update buttons_manager() and scenes_manager() function prototypes 

commit 41801fd8755f336883fad056b02ccb7f33f92caf <br>
Merge: f7436e9 0556872 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 17:38:25 2019 +0100 <br>
 
    Merge branch 'feature/global' into develop 

commit 0556872fba5b428e3911ca83d1c42e3a1f275094 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:37:40 2019 +0100 <br>
 
    [-] global.c, global.h 
    
    global.c : 
    - Remove scene reference 
    
    global.h : 
    - Remove scene property 

commit f7436e90c3e903b4de8513aa68e18b0694150c64 <br>
Merge: 0272667 18c7a5a <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 17:05:54 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit 18c7a5ae5c778438dacfbf7d870f6350b189e768 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 17:05:44 2019 +0100 <br>
 
    [~] buttons_manager.c, events_manager.c, scenes_manager.c, managers.h 
    
    buttons_manager.c, events_manager.c, scenes_manager.c : 
    - Add global component support 
    
    managers.h : 
    - Update buttons_manager(), events_manager() and scenes_manager() function prototype 

commit 02726673bf8720c8eaa4c45e0eb1d64c482d1af9 <br>
Merge: 4b127c5 0b099ee <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 16:56:41 2019 +0100 <br>
 
    Merge branch 'feature/global' into develop 

commit 0b099eea2f37d047d64243cf6fa73b528cf4ab21 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 16:56:29 2019 +0100 <br>
 
    [~] global.c 
    
    global.c : 
    - Fix leaks 

commit 4b127c5e2b8b2dd70aa5f8a720a8a03127e43c73 <br>
Merge: cf835c7 a03d612 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 16:50:04 2019 +0100 <br>
 
    Merge branch 'feature/modal' into develop 

commit a03d612fd316ea8f53e0d9403a02305253686332 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 16:49:51 2019 +0100 <br>
 
    [~] modal.c 
    
    modal.c : 
    - Fix leaks (call modal delete function) 

commit cf835c7a6bdf8dce64b4e00a72e7bf720807b41d <br>
Merge: 5fc972b b6d84e9 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 16:23:34 2019 +0100 <br>
 
    Merge branch 'feature/global' into develop 

commit b6d84e9deed2ccc66a4aa9bd2d72679b1964a50b <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 16:23:20 2019 +0100 <br>
 
    [+] global.c, global.h, components.h, Makefile 
    
    global.c : 
    - Add global functions 
    
    global.h : 
    - Add global function prototypes 
    
    components.h : 
    - Add global reference 

commit 5fc972b33eb06d936463e7ede72caff50dbede8e <br>
Merge: c2801c5 830df15 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 16:07:10 2019 +0100 <br>
 
    Merge branch 'feature/option' into develop 

commit 830df15110e02f55c31a866ea2daf2bfcf5e8631 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 16:04:24 2019 +0100 <br>
 
    [+] option.c, option.h, option_list.c, option_list.h, components.h, Makefile 
    
    option.c : 
    - Add option functions 
    
    option.h : 
    - Add option function prototypes 
    - Add option helper prototypes 
    
    option_list.c : 
    - Add option_list functions 
    
    option_list.h : 
    - Add option_list function prototype 
    - Add option_list helper prototype 
    
    components.h : 
    - Add option and option_list references 

commit c2801c55f61cd6a0e679b37420bdb95bdc6f7d91 <br>
Merge: c8a0eb9 7d3a802 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 9 15:00:58 2019 +0100 <br>
 
    Merge branch 'feature/components' into develop 

commit 7d3a802293b504ec6c47f46b60e46bf51bd3e92a <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 9 14:55:34 2019 +0100 <br>
 
    [~] components.h 
    
    components.h : 
    - Update data component reference 

commit c8a0eb97b9ede36e23360516f8e4c6e29b24293c <br>
Merge: 3efd630 2da846d <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Mar 7 10:36:45 2019 +0100 <br>
 
    Merge branch 'release/1.7.1' 

commit 2da846db900b7ff439301545f152919778c4365c <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Mar 7 10:36:04 2019 +0100 <br>
 
    [~] constants.h, scenes.h, .gitignore 
    
    constants.h : 
    - Use scene id macros 
    
    scenes.h : 
    - Update scene id macros 

commit 4f6487e6e3ba2ebb8153b305693bd25802055c84 <br>
Merge: 3efd630 bfa50da <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Mar 7 10:34:05 2019 +0100 <br>
 
    Merge branch 'bugfix/modal' into develop 

commit bfa50da1ffd86316fea82a55d435da1ece36b253 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Mar 7 10:32:28 2019 +0100 <br>
 
    [~] modal_list_helpers.c, modal_list.h 
    
    modal_list_helpers.c : 
    - Fix modal_list_run() function 
    
    modal_list.h : 
    - Update modal_list_run() function prototype 

commit 3efd630422759fcd672a28b531e0ce6e3682868f <br>
Merge: b9903e3 94b186b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 14:05:20 2019 +0100 <br>
 
    Merge branch 'release/1.7.0' 

commit 94b186bdf29de32a89346a065c8e73001bc003c3 <br>
Merge: ca31fc2 116856a <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 14:03:46 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 116856ae197c19a03382f165de29d9b3cbf6769d <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 14:02:57 2019 +0100 <br>
 
    [+] resources.h, resources/ | [~] scenes/ 
    
    scenes/ : 
    - Update testing scenes 

commit ca31fc22aabc9fe07d8c1965b3196cb387dd78a7 <br>
Merge: 3988539 2e990ce <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 14:01:01 2019 +0100 <br>
 
    Merge branch 'feature/button' into develop 

commit 2e990ce66e093973c4459fc22f21cee633b5c020 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 14:00:32 2019 +0100 <br>
 
    [*] button.c 
    
    button.c : 
    - Change default text size 

commit 398853925480c9449f9a4873b360acdf352fa003 <br>
Merge: a52bd71 de50554 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 13:00:34 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit de505548f49809e2dd8bd35be35e63e41c550395 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 13:00:22 2019 +0100 <br>
 
    [~] Update testing scenes/ 

commit a52bd71365cc43ff4e75824e2cf510401d5a5fd7 <br>
Merge: f71a561 521ae4d <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 12:58:36 2019 +0100 <br>
 
    Merge branch 'feature/utils' into develop 

commit 521ae4db661ccdc0f20062605c20746617d31617 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 12:58:20 2019 +0100 <br>
 
    [+] position_utils.c, position.h 
    
    position_utils.c : 
    - Add center_of_i() and center_of_f() functions 
    - Rename center_i() --> center_to_i() 
    - Rename center_f() --> center_to_f() 
    
    position.h : 
    - Add center_of_i() and center_of_f() function prototypes 
    - Update center_to_i() and center_to_f() function prototypes 

commit f71a5616524328ce23eea56ae9e1a3eaf51e260c <br>
Merge: 6497fd4 86d4236 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 12:52:29 2019 +0100 <br>
 
    Merge branch 'feature/button' into develop 

commit 86d42367e93546c29cd8328ca0134ffe60d25683 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 12:51:58 2019 +0100 <br>
 
    [~] button.c 
    
    button.c : 
    - Fix button text position 

commit 6497fd47110264c28ff212d4d31af836d9c60b08 <br>
Merge: 956b54f ed6793a <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 12:47:26 2019 +0100 <br>
 
    Merge branch 'feature/text' into develop 

commit ed6793aff8721049176e9480b78429f909240e8a <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 12:47:12 2019 +0100 <br>
 
    [~] text.c 
    
    text.c : 
    - Fix text position 

commit 956b54fc0ad318183e04fc16a1f34d5b1a3c170a <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 10:50:15 2019 +0100 <br>
 
    [~] components.h, Makefile 
    
    components.h : 
    - Change scene_data to data 

commit 620aa6fa2d5ceb227156f1c57571414907559fdd <br>
Merge: c57389d 56b3fd4 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 10:48:42 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 56b3fd453e016d9174a70e4352496156dda2439a <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 10:48:08 2019 +0100 <br>
 
    [~] scenes/, scenes.h 
    
    scenes/ : 
    - Update testing scenes 
    
    scenes.h : 
    - Update scenes function prototypes 

commit c57389d26ed6f22d5781dc9d20ca8b3e73fd6ebc <br>
Merge: afa4369 6802081 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 10:45:07 2019 +0100 <br>
 
    Merge branch 'feature/data' into develop 

commit 68020814ab75b1e533f7b8cf17549b2a137a52ab <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 10:44:21 2019 +0100 <br>
 
    [~] data.c, data.h 
    
    data.c : 
    - Rename scene_data.c --> data.c 
    - Rename scene_data references in data 
    
    data.h : 
    - Rename scene_data.h --> data.h 
    - Rename scene_data references in data 

commit afa4369dc6ed9c6e2098c2779d6c1f7bf69b7b12 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 10:21:15 2019 +0100 <br>
 
    [-] dyn_sprite_helpers.c, modal_helpers.c, buttons_manager.c 
    
    dyn_sprite_helpers.c, modal_helpers.c, buttons_manager.c : 
    - Remove useless includes 

commit dbd00e14e67435168cff978fca41024bacb0d606 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 00:41:40 2019 +0100 <br>
 
    [~] window.c | [+] Makefile 
    
    window.c : 
    - Use scene helpers 

commit 988a005f8f797c4729592de1565428ff69641e59 <br>
Merge: cab2118 cd03ab0 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 00:39:43 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit cd03ab0a3f6823f7f479857a190272dc25b39665 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 00:39:30 2019 +0100 <br>
 
    [~] resources.h, scenes.h, resources/engine, scenes/ 
    
    resources.h : 
    - Update paths 
    
    scenes.h : 
    - Update includes 
    
    resources/engine : 
    - Rename resources/images --> resources/engine 
    
    scenes/ : 
    - Add modal testing 
    - Update testing 

commit cab21189db614b9ec4c3309fa96b5b82529db109 <br>
Merge: f226481 a8ec940 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 00:33:09 2019 +0100 <br>
 
    Merge branch 'feature/scene' into develop 

commit a8ec940591748856f76ada31fb3f027c6b59dca9 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 00:31:32 2019 +0100 <br>
 
    [+] scene_helpers.c, scene.h, scene_data.c, scene_data.h | [~] scene.c 
    
    scene_helpers.c : 
    - Add scene helpers 
    
    scene.h : 
    - Add scene helper prototypes 
    
    scene_data.c : 
    - Add modal_list support 
    
    scene_data.h : 
    - Add modal_list property 
    
    scene.c : 
    - Small fix for scene_create() function 

commit f2264818fe9f2b122fb530a209a5069927b89b57 <br>
Merge: e428d84 47bc41b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Wed Mar 6 00:21:22 2019 +0100 <br>
 
    Merge branch 'feature/modal' into develop 

commit 47bc41b5d2f4fd8b9f9b5639d8cb05102dbbbe16 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Wed Mar 6 00:19:30 2019 +0100 <br>
 
    [+] modal.c, modal_list.c, modal_helpers.c, modal_list_helpers.c, modal.h, modal_list.h, components.h 
    
    modal.c : 
    - Add modal functions 
    
    modal_helpers.c : 
    - Add modal helpers 
    
    modal.h : 
    - Add modal function prototypes 
    - Add modal helper prototypes 
    
    modal_list.c : 
    - Add modal_list functions 
    
    modal_list_helpers.c : 
    - Add modal_list helpers 
    
    modal_list.h : 
    - Add modal_list function prototype 
    - Add modal_list helper prototype 
    
    components.h : 
    - Add modal and modal_list references 

commit e428d84b7e4e1cb10916817ea658abbf77f9b036 <br>
Merge: c97bb3a 8482041 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Tue Mar 5 19:24:37 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 84820410a6877c9a393641676b390056c8c453f5 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Tue Mar 5 19:24:23 2019 +0100 <br>
 
    [~] Update testing scenes/ 

commit c97bb3ae411dd8ff7f57e0ba3e5b5ba07cf55d0d <br>
Merge: 5615384 9d3dcb0 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Tue Mar 5 19:23:01 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit 9d3dcb05dcc3c98fe855dbb12c237959f221cf4f <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Tue Mar 5 19:22:28 2019 +0100 <br>
 
    [+] buttons_manager.c | [~] managers.h, Makefile 
    
    buttons_manager.c : 
    - Rename button_manager.c --> buttons_manager.c 
    - Add button_state() function (previously button_get_state() from button_helpers.c) 
    - Add button action support 
    
    managers.h : 
    - Update buttons_manager() function prototype 

commit 56153847311442b654b766f969e5c5f6f06946b8 <br>
Merge: a6334c5 a3d4698 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Tue Mar 5 19:18:32 2019 +0100 <br>
 
    Merge branch 'feature/button' into develop 

commit a3d46988b26739a168c14f6a8b20cbf16cfe3715 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Tue Mar 5 19:18:14 2019 +0100 <br>
 
    [-] button_helpers.c | [*] button.c, button.h 
    
    button_helpers.c : 
    - Remove button_get_state() function (moved in button manager) 
    
    button.c : 
    - Add button action 
    - Improve button_set_state() function 
    
    button.h : 
    - Add button action property 
    - Remove button_get_state() function prototype 

commit a6334c59b3d0a6ecd197e1b355192a137d3c0b05 <br>
Merge: b9903e3 df85884 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sun Mar 3 10:56:43 2019 +0100 <br>
 
    Merge branch 'feature/utils' into develop 

commit df85884306c97ffd32e283c7a7e7fc8fe06904a0 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sun Mar 3 10:56:03 2019 +0100 <br>
 
    [-] position.c, rectangle.c, vector.c 
    
    position.c, rectangle.c, vector.c : 
    - Remove old files 

commit b9903e3d0c485412c6eb63312d17c83bd7224d7d <br>
Merge: 934825a 18f5475 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 18:52:50 2019 +0100 <br>
 
    Merge branch 'release/1.6.0' 

commit 18f54750425cdb160117b69d89f047e1a0c62d75 <br>
Merge: 109d7bc ab7c2c2 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 18:50:09 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit ab7c2c27e2afb284a7008af034ea126bb9a5e0b7 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 18:49:57 2019 +0100 <br>
 
    [+] resources.h, resources/ | [~] scenes/, window.c, resources/ 
    
    resources.h : 
    - Add missing resource macros 
    
    scenes/ : 
    - Add button components 
    - Update other component functions 
    
    window.c : 
    - Update functions related to the scene 
    
    resources/ : 
    - Add resources 
    - Update resources 

commit 109d7bc2c457349777daa19a3cb52eafea54d68e <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 18:42:33 2019 +0100 <br>
 
    [+] scene_data.c, scene_data.h | [~] scene.h 
    
    scene_data.c : 
    - Add button_list component 
    
    scene_data.h : 
    - Add button_list property 
    
    scene.h : 
    - Change evt() and upd() function parameters 

commit f1940036172eb65d13e4696c722cc50be050d214 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 18:36:09 2019 +0100 <br>
 
    [+] components.h, managers.h, Makefile 
    
    components.h : 
    - Add button and button_list references 
    
    managers.h : 
    - Add button_manager() function prototype 

commit 202845b3822ee3ce4ef070b1cc308f2c06426f38 <br>
Merge: 33ff4fe 50c1ecd <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 18:33:22 2019 +0100 <br>
 
    Merge branch 'feature/utils' into develop 

commit 50c1ecd464f08bbea93b9fae676ff9759d4b29a7 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 18:33:11 2019 +0100 <br>
 
    [+] position_utils.c, rectangle_utils.c, vector_utils.c, position.h 
    
    position_utils.c : 
    - position.c --> position_utils.c 
    - Add center_i() function 
    
    rectangle_utils.c : 
    - rectangle.c --> rectangle_utils.c 
    
    vector_utils.c : 
    - vector.c --> vector_utils.c 
    
    position.h : 
    - Add center_i() function prototype 

commit 33ff4fed260617b11ae86a0dbb3bc3ca775e51ae <br>
Merge: e91f81d f3ff4c2 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 18:30:09 2019 +0100 <br>
 
    Merge branch 'feature/managers' into develop 

commit f3ff4c2e08123994eb3a7f3e3079645e0d37fe70 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 18:29:56 2019 +0100 <br>
 
    [+] button_manager.c 
    
    button.c : 
    - Add button manager functions 

commit e91f81dee2c63cf90aeafbd98d06beb57edaccac <br>
Merge: db37a15 82d8b2b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 18:28:54 2019 +0100 <br>
 
    Merge branch 'feature/button' into develop 

commit 82d8b2b0a1aeb227c89e0c74b2ae60b81597dd21 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 18:27:17 2019 +0100 <br>
 
    [+] button.c, button_list.c, button_helpers.c, button_list_helpers.c, button.h, button_list.h 
    
    button.c : 
    - Add button functions 
    
    button_helpers.c : 
    - Add button helpers 
    
    button.h : 
    - Add button function prototypes 
    - Add button helper prototypes 
    
    button_list.c : 
    - Add button_list functions 
    
    button_list_helpers.c : 
    - Add button_list helpers 
    
    button_list.h : 
    - Add button_list function prototype 
    - Add button_list helper prototype 

commit db37a1587190f6ddef57a49606d90eb0a8c8900e <br>
Merge: bb671a7 d3fe729 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 17:26:34 2019 +0100 <br>
 
    Merge branch 'feature/dyn_sprite' into develop 

commit d3fe72948736969025c3c76ab2a82b0814710265 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 17:26:23 2019 +0100 <br>
 
    [~] dyn_sprite_helpers.c, dyn_sprite.h 
    
    dyn_sprite_helpers.c : 
    - Change parameter name in dyn_sprite_calc_vect() function 
    - Fix calculation in dyn_sprite_calc_vect() function 
    
    dyn_sprite.h : 
    - Update dyn_sprite_calc_vect() function prototype 

commit bb671a7ad51ca3d3cdecb948689ddac881d13001 <br>
Merge: 039add2 d733364 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 16:45:58 2019 +0100 <br>
 
    Merge branch 'feature/components' into develop 

commit d733364d172839a0153191d986991ba869682ae8 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 16:45:21 2019 +0100 <br>
 
    [~] sprite_list_helpers.c 
    
    sprite_list_helpers.c : 
    - Update global id selector 

commit 039add25f1f9de2470178b5af4e5e4d879b02e80 <br>
Merge: e330664 ea894e7 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 15:43:14 2019 +0100 <br>
 
    Merge branch 'feature/components' into develop 

commit ea894e75e52b6ae93057378795964249a9d130ff <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 15:43:00 2019 +0100 <br>
 
    [~] helpers/ 
    
    helpers/ : 
    - Update helpers base prototype and global id selector 

commit e330664a0216a755d773a1ec8acb4197db037dd9 <br>
Merge: 88dfa8d 906a206 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 15:40:07 2019 +0100 <br>
 
    Merge branch 'feature/text' into develop 

commit 906a20635f06737205817937da9ed4aa86379580 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 15:39:24 2019 +0100 <br>
 
    [*] text.c 
    
    text.c : 
    - Improve text_create() and text_set_pos() functions 

commit 88dfa8ddc88b294839b23fc50923820963aa520e <br>
Merge: 934825a 68fc532 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Sat Mar 2 12:22:35 2019 +0100 <br>
 
    Merge branch 'feature/dyn_sprite' into develop 

commit 68fc53215f7dea16ed925e6c3e328144fcc8bb30 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Sat Mar 2 12:21:45 2019 +0100 <br>
 
    [+] dyn_sprite_helpers.c 
    
    dyn_sprite_helpers.c : 
    - Add reset support 

commit 934825aba71491803cfb268691ab95e05c88c690 <br>
Merge: 96def36 934b038 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 20:06:37 2019 +0100 <br>
 
    Merge branch 'release/1.5.0' 

commit 934b0386b75f0097d7c55687c1e0ae0c7bd04b2d <br>
Merge: 3c3372f 1534009 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 20:04:43 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 153400998463950657c66bb2e780b594497c1c3a <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 20:04:31 2019 +0100 <br>
 
    [+] scenes/ 

commit 3c3372f17f8c22b597daab8757c1bbb5b4e1dded <br>
Merge: e51e683 4522157 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 20:03:21 2019 +0100 <br>
 
    Merge branch 'feature/text' into develop 

commit 4522157056c5ebaea7f1c814a62e054580861c8e <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 20:03:07 2019 +0100 <br>
 
    [*] text_list_helpers.c, text_list.h 
    
    text_list_helpers.c : 
    - Add id support in text_list_display() function 
    
    text_list.h : 
    - Change text_list_display() function prototype 

commit e51e6838ee069d3a4668d9252970b45b107f3209 <br>
Merge: 808e966 f41678b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 20:02:27 2019 +0100 <br>
 
    Merge branch 'feature/sprite' into develop 

commit f41678bc7b9765efa624dfd2c1d4b5244ef4cf20 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 20:01:55 2019 +0100 <br>
 
    [*] sprite_list_helpers.c, sprite_list.h 
    
    sprite_list_helpers.c : 
    - Add id support in sprite_list_display() function 
    
    sprite_list.h : 
    - Change sprite_list_display() function prototype 

commit 808e9669698e04a4680da401cb8b3f97c67f390c <br>
Merge: b443af3 90f7b09 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 19:53:21 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 90f7b094f5f3c7086f0808dfd01be2ce3b55799e <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 19:53:12 2019 +0100 <br>
 
    [+] scenes/, window.c 
    
    window.c : 
    - Add framerate limit for testing 

commit b443af32dc7371abc0c4f82605725f65022029ec <br>
Merge: c0c832c 83df26f <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 19:48:55 2019 +0100 <br>
 
    Merge branch 'feature/dyn_sprite' into develop 

commit 83df26f3016b7b1972737cfe190428c7ae2cd68d <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 19:48:10 2019 +0100 <br>
 
    [+] dyn_sprite_helpers.c, dyn_sprite_list_helpers.c, dyn_sprite.h, dyn_sprite_list.h | [~] dyn_sprite.c 
    
    dyn_sprite.c : 
    - Fix dyn_sprite_create() and dyn_sprite_set_road() functions 
    
    dyn_sprite_helpers.c : 
    - Add dyn_sprite_animate() and dyn_sprite_move() helpers 
    
    dyn_sprite.h : 
    - Add dyn_sprite_animate() and dyn_sprite_move() helper prototypes 
    
    dyn_sprite_list_helpers.c : 
    - Add dyn_sprite_list_animate() and dyn_sprite_list_move() helpers 
    
    dyn_sprite_list.h : 
    - Add dyn_sprite_list_animate() and dyn_sprite_list_move() helper prototypes 

commit c0c832c467d83ae31c5a6cfe0e5053120ed88a18 <br>
Merge: a82cbec 42e2b8c <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 14:57:59 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit 42e2b8c8a625ae4e7c5e70fd949f19c79e85886f <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:57:43 2019 +0100 <br>
 
    [+] scenes/ 

commit a82cbec1bdb98911e8439c1c9e99f0d19032aa34 <br>
Merge: 1959da9 4d12710 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 14:53:57 2019 +0100 <br>
 
    Merge branch 'feature/dyn_sprite' into develop 

commit 1959da9deb8bf77a4d7fd147fd06840dcc3aac10 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:53:46 2019 +0100 <br>
 
    [~] dyn_sprite.c, dyn_sprite_list.h 
    
    dyn_sprite.c : 
    - Fix dyn_sprite_create() function 
    
    dyn_sprite_list.h : 
    - Epitech Coding Style 

commit 8d4a07a395a0be0f55782e3ac5c5fc77440fe5dd <br>
Merge: 1c7f2ee bcf258b <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 14:48:52 2019 +0100 <br>
 
    Merge branch 'feature/testing' into develop 

commit bcf258b7779dd16d1ef3c685caccc0b34ef4598a <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:48:23 2019 +0100 <br>
 
    [+] scenes/, scenes.h, constants.h, externs.h, resources.h 
    
    constants.h, externs.h : 
    - Add WINDOW_RECT constant 
    
    resources.h : 
    - Add macros for paths 

commit 1c7f2ee4ae695b1df31a60d42b245789ae912320 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:31:49 2019 +0100 <br>
 
    [~] utils.h 
    
    utils.h : 
    - Fix util references 

commit 9c1d1e338baf58ad001ff12df0ae2685f46f60d3 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:30:17 2019 +0100 <br>
 
    [+] components.h, utils.h 
    
    components.h : 
    - Add component references 
    
    utils.h : 
    - Add util references 

commit c44ee9c20d2d6a95a58e7e9a35b06dbc860a01ad <br>
Merge: 3caca3e 924d6f0 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 14:15:46 2019 +0100 <br>
 
    Merge branch 'feature/rectangle_utils' into develop 

commit 924d6f00a34fe19f2ef7b1bd2caf3060d3b35424 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:15:28 2019 +0100 <br>
 
    [+] rectangle.c, rectangle.h 
    
    rectangle.c : 
    - Add rectangle functions 
    
    rectangle.h : 
    - Add rectangle function prototypes 

commit 3caca3e49ac8a36f53415cea0c1a4c9fe9256d45 <br>
Merge: 4d47c45 d3a88b5 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 14:09:02 2019 +0100 <br>
 
    Merge branch 'feature/position_utils' into develop 

commit d3a88b5d52d30c05aa3a9a26b02cfb5c9bd0ab69 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 14:08:50 2019 +0100 <br>
 
    [+] position.c, position.h 
    
    position.c : 
    - Add position functions 
    
    position.h : 
    - Add position function prototypes 

commit 4d47c45a5cc4d6f4925dfea7e0b6c4811a8267da <br>
Merge: 69e4139 d398a25 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 13:51:28 2019 +0100 <br>
 
    Merge branch 'feature/vector_utils' into develop 

commit d398a25a8ac4920294f428a8b317542af0e1bbe1 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 13:50:09 2019 +0100 <br>
 
    [+] vector.c, vector.h 
    
    vector.c : 
    - Add vector functions 
    
    vector.h : 
    - Add vector function prototypes 

commit 69e4139eef2e73fe1606bbc3995391a933c9dadc <br>
Merge: 4720ce1 d8daf9f <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 11:18:03 2019 +0100 <br>
 
    Merge branch 'feature/scene' into develop 

commit d8daf9f0195edc1ac9cba9111c4ebd38f7c7b38b <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 11:17:41 2019 +0100 <br>
 
    [+] scene_data.c, scene_data.h 
    
    scene_data.c : 
    - Add dyn_sprite_list reference 
    
    scene_data.h : 
    - Add dyn_sprite_list reference 

commit 4720ce13af509ed0832651950acf82d8fd8b7fec <br>
Merge: 96def36 4d12710 <br>
Author: Guillaume Bonnet <28934649+MrSquaare@users.noreply.github.com> <br>
Date:   Thu Feb 28 11:10:22 2019 +0100 <br>
 
    Merge branch 'feature/dyn_sprite' into develop 

commit 4d1271062824edd69abe68469191b643562dc970 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 11:08:59 2019 +0100 <br>
 
    [+] dyn_sprite.c, dyn_sprite_list.c, dyn_sprite_helpers.c, dyn_sprite_list_helpers.c, dyn_sprite.h, dyn_sprite_list.h 
    
    dyn_sprite.c : 
    - Add dyn_sprite functions 
    
    dyn_sprite_helpers.c : 
    - Add dyn_sprite helpers 
    
    dyn_sprite.h : 
    - Add dyn_sprite function prototypes 
    - Add dyn_sprite helper prototypes 
    
    dyn_sprite_list.c : 
    - Add dyn_sprite_list functions 
    
    dyn_sprite_list_helpers.c : 
    - Add dyn_sprite_list helpers 
    
    dyn_sprite_list.h : 
    - Add dyn_sprite_list function prototype 
    - Add dyn_sprite_list helper prototype 

commit 96def36b4b9adcdb13aba11129e6b5d8c026cd48 <br>
Author: Guillaume Bonnet <guillaume.bonnet@epitech.eu> <br>
Date:   Thu Feb 28 09:03:30 2019 +0100 <br>
 
    Release 1.4.0 <br>
