char __cdecl sub_6F87052C(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // eax@2
  int v4; // eax@8
  int v5; // edi@10
  int v6; // esi@10
  signed int v7; // esi@11
  int *v8; // edi@12
  _BYTE *i; // ebx@12
  int v10; // eax@23
  int v11; // edi@25
  int v12; // eax@26
  signed int v14; // [sp+10h] [bp-38h]@11
  int v15; // [sp+14h] [bp-34h]@11
  _WORD *v16; // [sp+18h] [bp-30h]@10
  int v17; // [sp+1Ch] [bp-2Ch]@12
  int v18; // [sp+20h] [bp-28h]@1
  int v19; // [sp+24h] [bp-24h]@10
  int v20; // [sp+28h] [bp-20h]@7
  int v21; // [sp+2Ch] [bp-1Ch]@10
  signed int v22; // [sp+2Ch] [bp-1Ch]@19

  v2 = a1;
  v18 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 424) + 52);
    if ( !v3 )
    {
      sub_6F86FC10(a1);
      v3 = *(_DWORD *)(v18 + 52);
    }
    *(_DWORD *)(v18 + 52) = v3 - 1;
  }
  if ( *(_DWORD *)(v18 + 16) == -1 || *(_DWORD *)(a1 + 324) <= 0 )
    return 1;
  v20 = 0;
  while ( 1 )
  {
    v16 = *(_WORD **)(a2 + 4 * v20);
    v5 = *(_DWORD *)(v2 + 4 * v20 + 328);
    v19 = *(_DWORD *)(*(_DWORD *)(v2 + 4 * v5 + 300) + 20);
    v21 = v5 + 8;
    v6 = *(_DWORD *)(v18 + 4 * (v5 + 8) + 4) + *(_DWORD *)(v18 + 4 * (v19 + 12) + 8);
    if ( sub_6F86F66C(v2, (_BYTE *)v6) )
      break;
    *(_DWORD *)(v18 + 4 * v21 + 4) = 0;
    v4 = *(_DWORD *)(v18 + 4 * v5 + 20);
LABEL_9:
    *v16 = v4 << *(_DWORD *)(v2 + 380);
    if ( *(_DWORD *)(v2 + 324) <= ++v20 )
      return 1;
  }
  v14 = sub_6F86F66C(v2, (_BYTE *)(v6 + 1));
  v15 = v6 + v14 + 2;
  v7 = sub_6F86F66C(v2, (_BYTE *)v15);
  if ( !v7 )
  {
LABEL_17:
    if ( v7 >= 1 << *(_BYTE *)(v2 + v19 + 203) >> 1 )
    {
      if ( v7 <= 1 << *(_BYTE *)(v2 + v19 + 219) >> 1 )
        *(_DWORD *)(v18 + 4 * v21 + 4) = 4 * v14 + 4;
      else
        *(_DWORD *)(v18 + 4 * v21 + 4) = 4 * v14 + 12;
    }
    else
    {
      *(_DWORD *)(v18 + 4 * v21 + 4) = 0;
    }
    v22 = v7;
    while ( 1 )
    {
      v7 >>= 1;
      if ( !v7 )
        break;
      while ( sub_6F86F66C(v2, (_BYTE *)(v15 + 14)) )
      {
        v22 |= v7;
        v7 >>= 1;
        if ( !v7 )
          goto LABEL_23;
      }
    }
LABEL_23:
    v10 = v22 + 1;
    if ( v14 )
      v10 = -v10;
    v11 = v5 + 4;
    v4 = *(_DWORD *)(v18 + 4 * v11 + 4) + v10;
    *(_DWORD *)(v18 + 4 * v11 + 4) = v4;
    goto LABEL_9;
  }
  v17 = v5;
  v8 = (int *)v2;
  for ( i = (_BYTE *)(*(_DWORD *)(v18 + 4 * (v19 + 12) + 8) + 20); ; ++i )
  {
    if ( !sub_6F86F66C((int)v8, i) )
    {
      v15 = (int)i;
      v2 = (int)v8;
      v5 = v17;
      goto LABEL_17;
    }
    v7 *= 2;
    if ( v7 == 0x8000 )
      break;
  }
  v12 = *v8;
  *(_DWORD *)(v12 + 20) = 117;
  (*(void (__cdecl **)(int *, signed int))(v12 + 4))(v8, -1);
  *(_DWORD *)(v18 + 16) = -1;
  return 1;
}
