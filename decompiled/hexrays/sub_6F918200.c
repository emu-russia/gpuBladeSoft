_DWORD *__thiscall sub_6F918200(_DWORD *this, int a2, __int64 a3, int a4, int a5)
{
  _DWORD *v5; // ebx@1
  int v6; // ecx@1
  int v7; // esi@2
  int v8; // eax@2
  bool v9; // al@4
  bool v11; // zf@12
  int v12; // esi@13
  int v13; // edi@13
  __int64 v14; // rax@16
  unsigned __int64 v15; // rax@17
  int v16; // eax@20
  int v17; // edx@20
  int v18; // ecx@21
  unsigned __int64 v19; // rax@21
  int v20; // esi@21
  int v21; // edi@21
  bool v22; // [sp+24h] [bp-48h]@5
  int v23; // [sp+24h] [bp-48h]@21
  int v24; // [sp+3Ch] [bp-30h]@12
  unsigned __int64 v25; // [sp+40h] [bp-2Ch]@17
  int v26; // [sp+48h] [bp-24h]@22

  v5 = this;
  v6 = *(_DWORD *)(a2 + 88);
  if ( v6 )
  {
    v7 = 0;
    v8 = (*(int (**)(void))(*(_DWORD *)v6 + 20))();
    if ( v8 >= 0 )
      v7 = v8;
    v9 = v8 <= 0;
  }
  else
  {
    v9 = 1;
    v7 = 0;
  }
  *v5 = -1;
  v5[1] = -1;
  v5[2] = 0;
  v22 = v9 && a3 != 0;
  if ( sub_6F8BF810((void *)(a2 + 36)) != 1 || v22 )
    return v5;
  if ( a4 != 1 || a3 || *(_BYTE *)(a2 + 70) && !(unsigned __int8)(*(int (**)(void))(**(_DWORD **)(a2 + 88) + 24))() )
  {
    if ( *(_BYTE *)(a2 + 84) )
    {
      v11 = *(_DWORD *)(a2 + 8) == *(_DWORD *)(a2 + 4);
      *(_BYTE *)(a2 + 84) = 0;
      v16 = *(_DWORD *)(a2 + 76) + 2 * !v11;
      v17 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 76) = v16;
      *(_DWORD *)(a2 + 8) = v16;
      *(_DWORD *)(a2 + 12) = v17;
    }
    v23 = *(_DWORD *)(a2 + 48);
    v24 = *(_DWORD *)(a2 + 48);
    v18 = a3 * ((unsigned __int64)v7 >> 32) + v7 * HIDWORD(a3);
    v19 = (unsigned int)a3 * (unsigned __int64)(unsigned int)v7;
    v20 = a3 * v7;
    v21 = v18 + HIDWORD(v19);
    if ( *(_BYTE *)(a2 + 69) && a4 == 1 )
    {
      v24 = *(_DWORD *)(a2 + 56);
      v19 = sub_6F917300(a2, (int)&v24);
      v21 = ((signed int)v19 + __PAIR__((unsigned int)v21, v20)) >> 32;
      v20 += v19;
      v23 = v24;
    }
    sub_6F918150((int)&v25, SHIDWORD(v19), a2, v20, v21, a4, v23);
    *(_QWORD *)v5 = v25;
    v5[2] = v26;
    return v5;
  }
  v11 = *(_BYTE *)(a2 + 69) == 0;
  v24 = *(_DWORD *)(a2 + 48);
  if ( v11 )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v24 = *(_DWORD *)(a2 + 56);
    v12 = sub_6F917300(a2, (int)&v24);
    v13 = v12 >> 31;
  }
  if ( *(_BYTE *)(a2 + 70) )
  {
    v12 = (*(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 16)) >> 1;
    v13 = (*(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 16)) >> 32;
  }
  v14 = sub_6F90E590((void *)(a2 + 36), 0, 0, 1);
  if ( ((unsigned int)v14 & HIDWORD(v14)) == -1 )
    return v5;
  v15 = __PAIR__(v13, v12) + v14;
  *v5 = v15;
  v25 = v15;
  v5[1] = HIDWORD(v15);
  v5[2] = v24;
  return v5;
}
