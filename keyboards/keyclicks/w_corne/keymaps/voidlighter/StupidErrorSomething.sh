Compiling: quantum/keymap_introspection.c                                                          quantum/keymap_introspection.c: In function 'combo_count_raw':
quantum/keymap_introspection.c:80:19: error: 'key_combos' undeclared (first use in this function)
   80 |     return sizeof(key_combos) / sizeof(combo_t);
      |                   ^~~~~~~~~~
quantum/keymap_introspection.c:80:19: note: each undeclared identifier is reported only once for each function it appears in
quantum/keymap_introspection.c: In function 'combo_get_raw':
quantum/keymap_introspection.c:87:13: error: 'key_combos' undeclared (first use in this function)
   87 |     return &key_combos[combo_idx];
      |             ^~~~~~~~~~
quantum/keymap_introspection.c: In function 'combo_count_raw':
quantum/keymap_introspection.c:81:1: error: control reaches end of non-void function [-Werror=return-type]
   81 | }
      | ^
quantum/keymap_introspection.c: In function 'combo_get_raw':
quantum/keymap_introspection.c:88:1: error: control reaches end of non-void function [-Werror=return-type]
   88 | }
      | ^
cc1.exe: all warnings being treated as errors
 [ERRORS]
 |
 |
 |
make[1]: *** [builddefs/common_rules.mk:364: .build/obj_keyclicks_w_corne_voidlighter/quantum/keymap_introspection.o] Error 1
Make finished with errors
make: *** [Makefile:392: keyclicks/w_corne:voidlighter:flash] Error 1
