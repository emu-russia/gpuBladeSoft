int __stdcall sub_6F8F0530(int a1, int a2, int a3, __int16 a4, int a5)
{
  int v5; // edi@1
  int result; // eax@2
  int v7; // edx@2
  int v8; // eax@3
  int v9; // edx@4
  int v10; // eax@4
  int v11; // eax@5
  unsigned int v12; // eax@5
  int v13; // ecx@5
  __int16 v14; // di@5
  void *v15; // esp@5
  _WORD *v16; // eax@5
  int v17; // edi@9
  int v18; // eax@9
  bool v19; // zf@12
  int v20; // eax@13
  int v21; // eax@13
  int v22; // eax@16
  int v23; // eax@16
  int v24; // edi@17
  char v25; // [sp+8h] [bp-88h]@3
  char v26; // [sp+2Bh] [bp-65h]@5
  unsigned int v27; // [sp+30h] [bp-60h]@5
  int v28; // [sp+34h] [bp-5Ch]@5
  int v29; // [sp+38h] [bp-58h]@3
  __int16 v30; // [sp+3Eh] [bp-52h]@1
  int v31; // [sp+40h] [bp-50h]@1
  int v32; // [sp+44h] [bp-4Ch]@3
  int v33; // [sp+60h] [bp-30h]@2
  int v34; // [sp+64h] [bp-2Ch]@2

  v5 = *(_DWORD *)(a3 + 12);
  v30 = a4;
  v31 = v5;
  if ( !(v5 & 1) )
  {
    result = sub_6F8EF1E0(a1, a2, a3, (unsigned __int16)a4, (unsigned __int8)a5);
    v34 = v7;
    v33 = result;
    return result;
  }
  v29 = a5;
  LOBYTE(v32) = a2;
  v8 = sub_6F8BF000(a3 + 108);
  if ( (_BYTE)a5 )
  {
    v9 = *(_DWORD *)(v8 + 24);
    v29 = *(_DWORD *)(v8 + 20);
    v10 = *(_DWORD *)(a3 + 8);
    if ( v9 < v10 )
      goto LABEL_5;
LABEL_12:
    v19 = (_BYTE)v32 == 0;
    *(_DWORD *)(a3 + 8) = 0;
    if ( !v19 )
      return a1;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(v8 + 32);
  v29 = *(_DWORD *)(v8 + 28);
  v10 = *(_DWORD *)(a3 + 8);
  if ( v9 >= v10 )
    goto LABEL_12;
LABEL_5:
  v11 = v10 - v9;
  v28 = v11;
  v12 = 16 * ((unsigned int)(2 * v11 + 27) >> 4);
  sub_6F8A13B0(v12, v25);
  v14 = v30;
  v15 = alloca(v12);
  v16 = (_WORD *)((unsigned int)&v26 & 0xFFFFFFF0);
  v27 = (unsigned int)&v26 & 0xFFFFFFF0;
  do
  {
    *v16 = v14;
    ++v16;
    --v13;
  }
  while ( v13 );
  *(_DWORD *)(a3 + 8) = 0;
  if ( (v31 & 0xB0) == 32 )
  {
    if ( (_BYTE)v32 )
      return a1;
    v22 = *(_DWORD *)a1;
    v32 = v9;
    v23 = (*(int (__thiscall **)(int, int, int))(v22 + 48))(a1, v29, v9);
    if ( v32 == v23 )
    {
      v24 = v28;
      LOBYTE(v32) = v24 != (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a1 + 48))(a1, v27, v28);
      return a1;
    }
    goto LABEL_10;
  }
  v31 = v9;
  if ( !(_BYTE)v32 )
  {
    v17 = v28;
    v18 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)a1 + 48))(a1, v27, v28);
    v9 = v31;
    if ( v17 != v18 )
    {
LABEL_10:
      LOBYTE(v32) = 1;
      return a1;
    }
LABEL_13:
    v20 = *(_DWORD *)a1;
    v32 = v9;
    v21 = (*(int (__thiscall **)(int, int, int))(v20 + 48))(a1, v29, v9);
    LOBYTE(v32) = v32 != v21;
  }
  return a1;
}
