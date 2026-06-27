char __cdecl sub_6F870328(int a1, int *a2)
{
  int v2; // eax@2
  signed int v3; // edi@6
  int v4; // esi@7
  int v5; // ebx@8
  int v6; // eax@13
  signed int v8; // ebx@15
  int v9; // eax@20
  signed int v10; // eax@26
  int *v11; // edi@27
  _BYTE *i; // esi@27
  int v13; // eax@33
  signed int v14; // [sp+1Ch] [bp-3Ch]@15
  int v15; // [sp+24h] [bp-34h]@6
  int v16; // [sp+28h] [bp-30h]@6
  int v17; // [sp+2Ch] [bp-2Ch]@6
  int v18; // [sp+30h] [bp-28h]@7
  _BYTE *v19; // [sp+34h] [bp-24h]@16
  signed int v20; // [sp+34h] [bp-24h]@27
  _BYTE *v21; // [sp+38h] [bp-20h]@15
  signed int v22; // [sp+38h] [bp-20h]@16
  int v23; // [sp+3Ch] [bp-1Ch]@1

  v23 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 424) + 52);
    if ( !v2 )
    {
      sub_6F86FC10(a1);
      v2 = *(_DWORD *)(v23 + 52);
    }
    *(_DWORD *)(v23 + 52) = v2 - 1;
  }
  if ( *(_DWORD *)(v23 + 16) != -1 )
  {
    v16 = *(_DWORD *)(a1 + 388);
    v15 = *a2;
    v17 = *(_DWORD *)(*(_DWORD *)(a1 + 300) + 24);
    v3 = *(_DWORD *)(a1 + 368);
    if ( v3 <= *(_DWORD *)(a1 + 372) )
    {
      v18 = *(_DWORD *)(*(_DWORD *)(a1 + 300) + 24) + 28;
      v4 = a1;
      do
      {
        v5 = *(_DWORD *)(v23 + 4 * v18 + 8) + 3 * v3 - 3;
        if ( sub_6F86F66C(v4, (_BYTE *)v5) )
          break;
        while ( !sub_6F86F66C(v4, (_BYTE *)(v5 + 1)) )
        {
          if ( ++v3 > *(_DWORD *)(v4 + 372) )
          {
            v6 = *(_DWORD *)v4;
            *(_DWORD *)(v6 + 20) = 117;
            (*(void (__cdecl **)(int, signed int))(v6 + 4))(v4, -1);
            *(_DWORD *)(v23 + 16) = -1;
            return 1;
          }
          v5 += 3;
        }
        v14 = sub_6F86F66C(v4, (_BYTE *)(v23 + 184));
        v21 = (_BYTE *)(v5 + 2);
        v8 = sub_6F86F66C(v4, (_BYTE *)(v5 + 2));
        if ( v8 && sub_6F86F66C(v4, v21) )
        {
          v8 *= 2;
          if ( *(_BYTE *)(v4 + v17 + 235) < v3 )
            v10 = 217;
          else
            v10 = 189;
          v20 = v3;
          v11 = (int *)v4;
          for ( i = (_BYTE *)(v10 + *(_DWORD *)(v23 + 4 * v18 + 8)); ; ++i )
          {
            if ( !sub_6F86F66C((int)v11, i) )
            {
              v21 = i;
              v4 = (int)v11;
              v3 = v20;
              goto LABEL_16;
            }
            v8 *= 2;
            if ( v8 == 0x8000 )
              break;
          }
          v13 = *v11;
          *(_DWORD *)(v13 + 20) = 117;
          (*(void (__cdecl **)(int *, signed int))(v13 + 4))(v11, -1);
          *(_DWORD *)(v23 + 16) = -1;
          return 1;
        }
LABEL_16:
        v19 = v21 + 14;
        v22 = v8;
        while ( 1 )
        {
          v8 >>= 1;
          if ( !v8 )
            break;
          while ( sub_6F86F66C(v4, v19) )
          {
            v22 |= v8;
            v8 >>= 1;
            if ( !v8 )
              goto LABEL_20;
          }
        }
LABEL_20:
        v9 = v22 + 1;
        if ( v14 )
          v9 = -v9;
        *(_WORD *)(v15 + 2 * *(_DWORD *)(v16 + 4 * v3++)) = v9 << *(_DWORD *)(v4 + 380);
      }
      while ( *(_DWORD *)(v4 + 372) >= v3 );
    }
  }
  return 1;
}
