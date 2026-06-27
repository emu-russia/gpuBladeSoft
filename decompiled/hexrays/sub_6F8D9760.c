unsigned int *__thiscall sub_6F8D9760(int *this, int a2, int a3, int a4)
{
  int v4; // eax@1
  int v5; // ebx@1
  int v6; // eax@1
  unsigned int v7; // eax@3
  unsigned int v8; // eax@6
  unsigned int v9; // ecx@6
  unsigned int v10; // eax@7
  size_t v11; // eax@10
  int v12; // eax@10
  int v14; // [sp+0h] [bp-88h]@1
  char *v15; // [sp+8h] [bp-80h]@1
  char v16; // [sp+Ch] [bp-7Ch]@1
  const wchar_t *v17; // [sp+1Ch] [bp-6Ch]@1
  char *v18; // [sp+20h] [bp-68h]@1
  int v19; // [sp+24h] [bp-64h]@1
  unsigned int v20; // [sp+28h] [bp-60h]@3
  wchar_t *v21; // [sp+2Ch] [bp-5Ch]@2
  unsigned int *v22; // [sp+30h] [bp-58h]@1
  const wchar_t *v23; // [sp+34h] [bp-54h]@2
  size_t v24; // [sp+38h] [bp-50h]@1
  char v25; // [sp+3Ch] [bp-4Ch]@1
  int v26; // [sp+40h] [bp-48h]@1
  int (__cdecl *v27)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-34h]@1
  int *v28; // [sp+58h] [bp-30h]@1
  char *v29; // [sp+5Ch] [bp-2Ch]@1
  void *v30; // [sp+60h] [bp-28h]@1
  int *v31; // [sp+64h] [bp-24h]@1
  char v32; // [sp+7Fh] [bp-9h]@1
  char v33; // [sp+80h] [bp-8h]@1

  v29 = &v33;
  v22 = (unsigned int *)this;
  v27 = sub_6F962A50;
  v28 = dword_6F96AEC0;
  v30 = &loc_6F8D9959;
  v31 = &v14;
  sub_6F8A1A60((int *)&v25);
  v18 = &v32;
  v15 = &v32;
  v26 = -1;
  *v22 = (unsigned int)sub_6F8FD120(0, 0);
  v16 = 0;
  v15 = v18;
  v26 = 1;
  v4 = sub_6F8FD210((const void *)a3, a4);
  v5 = v4;
  v6 = *(_DWORD *)(v4 - 12);
  v17 = (const wchar_t *)v5;
  v19 = v5 + 2 * v6;
  v24 = a4 - a3;
  if ( (unsigned int)(a4 - a3) > 0x3FFFFFFE )
  {
    v26 = 2;
    sub_6F962910();
  }
  v26 = 2;
  v21 = (wchar_t *)sub_6F961B40(2 * (a4 - a3));
  v23 = v17;
  while ( 1 )
  {
    v10 = sub_6F8D9730(v21, v23, v24);
    if ( v24 <= v10 )
    {
      v24 = v10 + 1;
      j_j_free_1(v21);
      if ( v24 > 0x3FFFFFFE )
      {
        v26 = 5;
        sub_6F962910();
      }
      v26 = 5;
      v21 = (wchar_t *)sub_6F961B40(2 * v24);
      v10 = sub_6F8D9730(v21, v23, v24);
    }
    v26 = 3;
    sub_6F8FDAF0(v22, (unsigned int)v21, v10);
    v11 = wcslen(v23);
    v12 = (int)&v23[v11];
    if ( v19 == v12 )
      break;
    v23 = (const wchar_t *)(v12 + 2);
    v7 = *v22;
    v20 = *(_DWORD *)(*v22 - 12) + 1;
    if ( v20 > *(_DWORD *)(v7 - 8) || *(_DWORD *)(v7 - 4) > 0 )
    {
      v26 = 3;
      sub_6F8FEB20((int *)v22, v20);
    }
    v8 = *v22;
    *(_WORD *)(v8 + 2 * *(_DWORD *)(*v22 - 12)) = 0;
    v9 = v20;
    *(_DWORD *)(v8 - 4) = 0;
    *(_DWORD *)(v8 - 12) = v9;
    *(_WORD *)(v8 + 2 * v9) = 0;
  }
  j_j_free_1(v21);
  sub_6F8FD6C0((int)(v17 - 6), (int)v18);
  sub_6F8A1AD0((int *)&v25);
  return v22;
}
