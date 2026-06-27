void *__thiscall sub_6F8C99F0(void *this, int a2, int a3, int a4)
{
  _WORD *v4; // eax@1
  int v5; // edx@1
  int v6; // ecx@3
  int v7; // ebx@3
  unsigned int v8; // eax@4
  size_t v9; // eax@8
  int v10; // eax@8
  int v11; // eax@9
  unsigned int v12; // edx@10
  int v14; // [sp+0h] [bp-98h]@1
  int v15; // [sp+8h] [bp-90h]@1
  int v16; // [sp+1Ch] [bp-7Ch]@1
  char *v17; // [sp+20h] [bp-78h]@1
  int v18; // [sp+24h] [bp-74h]@3
  unsigned int v19; // [sp+28h] [bp-70h]@3
  wchar_t *v20; // [sp+2Ch] [bp-6Ch]@2
  const wchar_t *v21; // [sp+30h] [bp-68h]@1
  void *v22; // [sp+34h] [bp-64h]@1
  size_t v23; // [sp+38h] [bp-60h]@1
  char v24; // [sp+3Ch] [bp-5Ch]@1
  int v25; // [sp+40h] [bp-58h]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-44h]@1
  int *v27; // [sp+58h] [bp-40h]@1
  char *v28; // [sp+5Ch] [bp-3Ch]@1
  int (*v29)(); // [sp+60h] [bp-38h]@1
  int *v30; // [sp+64h] [bp-34h]@1
  char *v31; // [sp+78h] [bp-20h]@1
  int v32; // [sp+7Ch] [bp-1Ch]@1
  char v33; // [sp+80h] [bp-18h]@1
  char v34; // [sp+90h] [bp-8h]@1

  v28 = &v34;
  v22 = this;
  v26 = sub_6F962A50;
  v27 = dword_6F96C044;
  v29 = sub_6F8C9C4D;
  v30 = &v14;
  sub_6F8A1A60((int *)&v24);
  v4 = v22;
  v5 = (int)v22 + 8;
  *((_DWORD *)v22 + 1) = 0;
  *(_DWORD *)v4 = v5;
  v16 = v5;
  v4[4] = 0;
  v31 = &v33;
  LOBYTE(v15) = 0;
  v25 = 1;
  sub_6F93D440((void **)&v31, (const void *)a3, a4, v15);
  v21 = (const wchar_t *)v31;
  v17 = &v31[2 * v32];
  v23 = a4 - a3;
  if ( (unsigned int)(a4 - a3) > 0x3FFFFFFE )
  {
    v25 = 2;
    sub_6F962910();
  }
  v25 = 2;
  v20 = (wchar_t *)sub_6F961B40(2 * (a4 - a3));
  while ( 1 )
  {
    v8 = sub_6F8C99C0(v20, v21, v23);
    if ( v23 <= v8 )
    {
      v23 = v8 + 1;
      j_j_free_1(v20);
      if ( v23 > 0x3FFFFFFE )
      {
        v25 = 5;
        sub_6F962910();
      }
      v25 = 5;
      v20 = (wchar_t *)sub_6F961B40(2 * v23);
      v8 = sub_6F8C99C0(v20, v21, v23);
    }
    if ( v8 > 0x3FFFFFFF - *((_DWORD *)v22 + 1) )
    {
      v25 = 3;
      sub_6F95B240("basic_string::append");
    }
    v25 = 3;
    sub_6F93F020((int)v22, v20, v8);
    v9 = wcslen(v21);
    v10 = (int)&v21[v9];
    if ( v17 == (char *)v10 )
      break;
    v21 = (const wchar_t *)(v10 + 2);
    v11 = *(_DWORD *)v22;
    v18 = *((_DWORD *)v22 + 1);
    v19 = v18 + 1;
    if ( v16 == v11 )
      v12 = 7;
    else
      v12 = *((_DWORD *)v22 + 2);
    if ( v19 > v12 )
    {
      v25 = 3;
      sub_6F93F200((int)v22, v18, 0, 0, 1);
      v11 = *(_DWORD *)v22;
    }
    v6 = v18;
    v7 = v19;
    *(_WORD *)(v11 + 2 * v18) = 0;
    *((_DWORD *)v22 + 1) = v7;
    *(_WORD *)(v11 + 2 * v6 + 2) = 0;
  }
  j_j_free_1(v20);
  if ( v31 != &v33 )
    j_free_1(v31);
  sub_6F8A1AD0((int *)&v24);
  return v22;
}
