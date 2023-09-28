# Valgrind Example

### Conditional jump or move depends on uninitialised value(s)
```
==7281== Conditional jump or move depends on uninitialised value(s)
==7281==    at 0x483872C: malloc (vg_replace_malloc.c:307)
==7281==    by 0x109190: getStars (functions.c:26)
==7281==    by 0x10915D: main (main.c:31)
==7281==  Uninitialised value was created by a stack allocation
==7281==    at 0x109145: main (main.c:23)
```
### Use of uninitialised value of size 8
```
==7281== Use of uninitialised value of size 8
==7281==    at 0x1091C7: getStars (functions.c:35)
==7281==    by 0x10915D: main (main.c:31)
==7281==  Uninitialised value was created by a stack allocation
==7281==    at 0x109145: main (main.c:23)
```
### 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
```
==7281== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==7281==    at 0x483877F: malloc (vg_replace_malloc.c:307)
==7281==    by 0x109190: getStars (functions.c:26)
==7281==    by 0x10915D: main (main.c:31)
```
### ERROR SUMMARY: 4 errors from 4 contexts (suppressed: 0 from 0)

[Linux commands cheat sheet](https://ryanstutorials.net/linuxtutorial/cheatsheet.php)

[Linux File Permissions](https://wizardzines.com/comics/permissions/)

[Linux tar command](https://wizardzines.com/comics/tar/)

### Code Formatting
Apply the coding standards via:
* Windows: ```SHIFT + ALT + F```
* Mac: ```SHIFT + OPTION + F```
* Linux: ```CTRL + SHIFT + I```

Notes
* [GDB to LLDB Command Mapping](https://lldb.llvm.org/use/map.html)
* [Using expressions in the watch panel with LLDB](https://github.com/vadimcn/vscode-lldb/blob/master/MANUAL.md#native-expressions)
* To view the data pointed to by a void* 
  *   For LLDB: 
	  * `/nat *(int*) pVoid`
* [View pointer as array in debugger](https://github.com/microsoft/vscode-cpptools/issues/172#issuecomment-1281804128)
  *   For LLDB:
	  * `/nat *(int(*)[13])pIntArray`
  *   For GDB:
      * `*pIntArray@13` or  `*pIntArray@ARRAY_SIZE`
