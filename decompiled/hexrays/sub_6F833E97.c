char *__cdecl sub_6F833E97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char *result; // eax@4
  char v8; // [sp+14h] [bp-384h]@1
  char v9; // [sp+54h] [bp-344h]@1
  void (__cdecl __noreturn *v10)(int, int); // [sp+94h] [bp-304h]@2
  char *v11; // [sp+98h] [bp-300h]@2
  int v12; // [sp+9Ch] [bp-2FCh]@2
  void *(__cdecl *v13)(int, unsigned int, unsigned int); // [sp+F8h] [bp-2A0h]@4
  void (__cdecl *v14)(int, int); // [sp+FCh] [bp-29Ch]@4
  char *v15; // [sp+100h] [bp-298h]@4
  int v16; // [sp+2E4h] [bp-B4h]@1
  int v17; // [sp+2E8h] [bp-B0h]@1
  int v18; // [sp+2ECh] [bp-ACh]@1
  int v19; // [sp+2F0h] [bp-A8h]@1
  char *v20; // [sp+37Ch] [bp-1Ch]@3

  memset(&v9, 0, 0x328u);
  v16 = 0x7FFFFFFF;
  v17 = 0x7FFFFFFF;
  v18 = 0;
  v19 = 0;
  sub_6F83B617((int)&v9, a5, a6, a7);
  sub_6F839BE3((int)&v9, a2, a3, a4);
  if ( !setjmp3((int)&v8, 0)
    && (v11 = &v8, v12 = 0, v10 = longjmp, sub_6F833CA0((int)&v9, a1))
    && (v20 = (char *)sub_6F83B561((int)&v9, 0x328u)) != 0 )
  {
    v13 = sub_6F833B3F;
    v14 = sub_6F833BA2;
    v15 = v20;
    v11 = 0;
    v12 = 0;
    v10 = 0;
    qmemcpy(v20, &v9, 0x328u);
    result = v20;
  }
  else
  {
    result = 0;
  }
  return result;
}
