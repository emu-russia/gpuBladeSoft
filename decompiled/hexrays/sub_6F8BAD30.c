void __noreturn sub_6F8BAD30()
{
  int v0; // eax@2
  _BYTE *v1; // ecx@3
  bool v2; // zf@3
  FILE *v3; // eax@3
  FILE *v4; // eax@4
  FILE *v5; // eax@5
  FILE *v6; // eax@8
  FILE *v7; // eax@9
  FILE *v8; // eax@11
  void *Str; // [sp+0h] [bp-6Ch]@1
  int (__cdecl *v10)(void *); // [sp+10h] [bp-5Ch]@3
  const char *v11; // [sp+14h] [bp-58h]@3
  const char *v12; // [sp+18h] [bp-54h]@3
  char v13; // [sp+1Ch] [bp-50h]@1
  int v14; // [sp+20h] [bp-4Ch]@3
  int (__cdecl *v15)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v16; // [sp+38h] [bp-34h]@1
  char *v17; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v18)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  void **v19; // [sp+44h] [bp-28h]@1
  int v20; // [sp+5Ch] [bp-10h]@3
  char v21; // [sp+60h] [bp-Ch]@1

  v15 = sub_6F962A50;
  v17 = &v21;
  v16 = dword_6F96CB2C;
  v18 = sub_6F8BAF14;
  v19 = &Str;
  sub_6F8A1A60((int *)&v13);
  if ( !byte_6FB4A514 )
  {
    byte_6FB4A514 = 1;
    v0 = sub_6F962070();
    if ( v0 )
    {
      v1 = *(_BYTE **)(v0 + 4);
      v2 = *v1 == 42;
      v20 = -1;
      Str = &v1[v2];
      v12 = &v1[v2];
      v14 = -1;
      v11 = (const char *)sub_6F8A04D0((const char *)Str, 0, 0, &v20);
      v10 = (int (__cdecl *)(void *))off_6FB48ABC;
      v3 = (FILE *)off_6FB48ABC(2);
      fwrite("terminate called after throwing an instance of '", 1u, 0x30u, v3);
      Str = (void *)2;
      if ( v20 )
      {
        v14 = -1;
        v4 = (FILE *)v10(Str);
        fputs(v12, v4);
      }
      else
      {
        v6 = (FILE *)v10(Str);
        fputs(v11, v6);
      }
      v14 = -1;
      v5 = (FILE *)v10((void *)2);
      fwrite("'\n", 1u, 2u, v5);
      if ( !v20 )
        free((void *)v11);
      v14 = 1;
      sub_6F962840();
    }
    v14 = -1;
    v7 = (FILE *)off_6FB48ABC(2);
    fwrite("terminate called without an active exception\n", 1u, 0x2Du, v7);
    v14 = -1;
    abort();
  }
  v14 = -1;
  v8 = (FILE *)off_6FB48ABC(2);
  fwrite("terminate called recursively\n", 1u, 0x1Du, v8);
  abort();
}
