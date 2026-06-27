char __cdecl sub_6F872EFC(int a1, int a2)
{
  int v2; // eax@3
  int v3; // ebx@3
  int v4; // esi@3
  signed int v5; // ecx@3
  int v6; // ebx@4
  int v7; // edx@4
  _WORD *v8; // esi@8
  char result; // al@12
  int v10; // [sp+1Ch] [bp-4Ch]@3
  int v11; // [sp+28h] [bp-40h]@1
  signed int v12; // [sp+2Ch] [bp-3Ch]@1
  int v13; // [sp+3Ch] [bp-2Ch]@3
  int v14; // [sp+40h] [bp-28h]@3
  int v15; // [sp+44h] [bp-24h]@10
  int v16; // [sp+48h] [bp-20h]@10
  int v17; // [sp+4Ch] [bp-1Ch]@3

  v11 = *(_DWORD *)(a1 + 424);
  v12 = 1 << *(_DWORD *)(a1 + 380);
  if ( !*(_DWORD *)(a1 + 252) || *(_DWORD *)(*(_DWORD *)(a1 + 424) + 40) || sub_6F872974(a1) )
  {
    v17 = a1;
    v2 = *(_DWORD *)(a1 + 24);
    v3 = *(_DWORD *)v2;
    v13 = *(_DWORD *)v2;
    v4 = *(_DWORD *)(v2 + 4);
    v14 = *(_DWORD *)(v2 + 4);
    v10 = *(_DWORD *)(v11 + 8);
    v5 = *(_DWORD *)(v11 + 12);
    if ( *(_DWORD *)(a1 + 324) > 0 )
    {
      v6 = 0;
      v7 = *(_DWORD *)(v11 + 8);
      do
      {
        v8 = *(_WORD **)(a2 + 4 * v6);
        if ( v5 <= 0 )
        {
          if ( !sub_6F87276C((int)&v13, v7, v5, 1) )
            goto LABEL_14;
          v7 = v15;
          v5 = v16;
        }
        if ( (v7 >> --v5) & 1 )
          *v8 |= v12;
        ++v6;
      }
      while ( *(_DWORD *)(a1 + 324) > v6 );
      v10 = v7;
      v2 = *(_DWORD *)(a1 + 24);
      v3 = v13;
      v4 = v14;
    }
    *(_DWORD *)v2 = v3;
    *(_DWORD *)(v2 + 4) = v4;
    *(_DWORD *)(v11 + 8) = v10;
    *(_DWORD *)(v11 + 12) = v5;
    --*(_DWORD *)(v11 + 40);
    result = 1;
  }
  else
  {
LABEL_14:
    result = 0;
  }
  return result;
}
