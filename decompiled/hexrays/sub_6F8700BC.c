char __cdecl sub_6F8700BC(int a1, int *a2)
{
  int v2; // eax@2
  int v3; // edi@6
  int v4; // ecx@6
  int v5; // eax@6
  int v6; // ebx@8
  int v7; // esi@11
  int v8; // ebx@13
  _WORD *v9; // ecx@16
  int v10; // eax@19
  __int16 v12; // ax@24
  _WORD *v13; // [sp+10h] [bp-38h]@17
  __int16 *v14; // [sp+10h] [bp-38h]@23
  int v15; // [sp+18h] [bp-30h]@12
  signed int v16; // [sp+1Ch] [bp-2Ch]@6
  signed int v17; // [sp+20h] [bp-28h]@6
  int v18; // [sp+24h] [bp-24h]@12
  int v19; // [sp+28h] [bp-20h]@1
  int v20; // [sp+2Ch] [bp-1Ch]@6

  v19 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 424) + 52);
    if ( !v2 )
    {
      sub_6F86FC10(a1);
      v2 = *(_DWORD *)(v19 + 52);
    }
    *(_DWORD *)(v19 + 52) = v2 - 1;
  }
  if ( *(_DWORD *)(v19 + 16) != -1 )
  {
    v3 = *(_DWORD *)(a1 + 388);
    v20 = *a2;
    v4 = *(_DWORD *)(a1 + 380);
    v17 = 1 << v4;
    v16 = -1 << v4;
    v5 = *(_DWORD *)(a1 + 372);
    if ( v5 <= 0 || *(_WORD *)(v20 + 2 * *(_DWORD *)(v3 + 4 * v5)) )
    {
      v6 = *(_DWORD *)(a1 + 372);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 372);
      do
        --v6;
      while ( v6 > 0 && !*(_WORD *)(v20 + 2 * *(_DWORD *)(v3 + 4 * v6)) );
    }
    v7 = *(_DWORD *)(a1 + 368);
    if ( v5 >= v7 )
    {
      v18 = *(_DWORD *)(*(_DWORD *)(a1 + 300) + 24) + 28;
      v15 = v6;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v19 + 4 * v18 + 8) + 3 * v7 - 3;
        if ( v15 < v7 )
          break;
        while ( 1 )
        {
          v9 = (_WORD *)(v20 + 2 * *(_DWORD *)(v3 + 4 * v7));
          if ( *v9 )
            goto LABEL_23;
LABEL_17:
          v13 = v9;
          if ( sub_6F86F66C(a1, (_BYTE *)(v8 + 1)) )
            break;
          if ( ++v7 > *(_DWORD *)(a1 + 372) )
          {
            v10 = *(_DWORD *)a1;
            *(_DWORD *)(v10 + 20) = 117;
            (*(void (__cdecl **)(int, signed int))(v10 + 4))(a1, -1);
            *(_DWORD *)(v19 + 16) = -1;
            return 1;
          }
          v8 += 3;
        }
        if ( sub_6F86F66C(a1, (_BYTE *)(v19 + 184)) )
          *v13 = v16;
        else
          *v13 = v17;
LABEL_26:
        if ( *(_DWORD *)(a1 + 372) < ++v7 )
          return 1;
      }
      if ( sub_6F86F66C(a1, (_BYTE *)(*(_DWORD *)(v19 + 4 * v18 + 8) + 3 * v7 - 3)) )
        return 1;
      v9 = (_WORD *)(v20 + 2 * *(_DWORD *)(v3 + 4 * v7));
      if ( !*v9 )
        goto LABEL_17;
LABEL_23:
      v14 = v9;
      if ( sub_6F86F66C(a1, (_BYTE *)(v8 + 2)) )
      {
        v12 = *v14;
        if ( *v14 < 0 )
          *v14 = v16 + v12;
        else
          *v14 = v17 + v12;
      }
      goto LABEL_26;
    }
  }
  return 1;
}
