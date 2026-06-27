unsigned int __thiscall sub_6F8D53A0(void *this, unsigned int a2, int a3, int a4, __int16 a5, int a6, int a7, _DWORD *a8, int *a9)
{
  int *v9; // eax@1
  __int64 v10; // rax@2
  int v12; // ebx@4
  __int64 v13; // [sp+0h] [bp-98h]@1
  int v14; // [sp+8h] [bp-90h]@4
  int *v15; // [sp+18h] [bp-80h]@1
  int *v16; // [sp+20h] [bp-78h]@1
  int v17; // [sp+24h] [bp-74h]@1
  char *v18; // [sp+28h] [bp-70h]@1
  int v19; // [sp+2Ch] [bp-6Ch]@1
  unsigned int v20; // [sp+30h] [bp-68h]@1
  char v21; // [sp+34h] [bp-64h]@1
  int v22; // [sp+38h] [bp-60h]@1
  int (__cdecl *v23)(int, int, __int64, void (**)(void), int *); // [sp+4Ch] [bp-4Ch]@1
  __int16 *v24; // [sp+50h] [bp-48h]@1
  char *v25; // [sp+54h] [bp-44h]@1
  int (*v26)(); // [sp+58h] [bp-40h]@1
  __int64 *v27; // [sp+5Ch] [bp-3Ch]@1
  int v28; // [sp+68h] [bp-30h]@3
  int v29; // [sp+6Ch] [bp-2Ch]@3
  char *v30; // [sp+78h] [bp-20h]@1
  char *v31; // [sp+7Ch] [bp-1Ch]@1
  char v32; // [sp+80h] [bp-18h]@1
  char v33; // [sp+90h] [bp-8h]@1

  v18 = (char *)this;
  v23 = sub_6F962A50;
  v17 = a6;
  v25 = &v33;
  v20 = a2;
  v19 = a3;
  v24 = &word_6F96C216;
  v26 = sub_6F8D5538;
  v27 = &v13;
  sub_6F8A1A60((int *)&v21);
  v22 = -1;
  v9 = (int *)sub_6F95DC70(a7 + 108);
  v32 = 0;
  v16 = v9;
  v30 = &v32;
  v31 = 0;
  v15 = (int *)&v30;
  if ( (_BYTE)v17 )
  {
    v22 = 1;
    v10 = sub_6F8D4230(__PAIR__(v19, v20), a4, a5, a7, a8, (int)v15);
  }
  else
  {
    v22 = 1;
    v10 = sub_6F8D30E0(__PAIR__(v19, v20), a4, a5, a7, a8, (int)v15);
  }
  v29 = HIDWORD(v10);
  WORD3(v10) = HIWORD(v19);
  v28 = v10;
  v20 = v10;
  WORD2(v10) = 0;
  v19 = (unsigned __int16)v29 | HIDWORD(v10);
  v18 = v31;
  if ( v31 )
  {
    v22 = 1;
    sub_6F93E470((int)a9, (unsigned int)v18, 0);
    v12 = *v16;
    v14 = *a9;
    LODWORD(v13) = v30;
    HIDWORD(v13) = &v18[(_DWORD)v30];
    (*(void (__cdecl **)(char *, int, int))(v12 + 44))(v30, (int)&v18[(_DWORD)v30], v14);
  }
  if ( v30 != &v32 )
    j_free_1(v30);
  sub_6F8A1AD0((int *)&v21);
  return v20;
}
