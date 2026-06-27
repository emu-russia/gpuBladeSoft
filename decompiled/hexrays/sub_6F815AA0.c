int __cdecl sub_6F815AA0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax@1
  int v7; // edi@1
  signed int v8; // esi@2
  int v9; // eax@6
  int v10; // eax@7
  int v11; // edx@8
  int v12; // eax@9
  int v13; // eax@9
  int v14; // eax@9
  int v15; // eax@9
  int v16; // [sp+10h] [bp-2Ch]@1
  int v17; // [sp+14h] [bp-28h]@1
  int v18; // [sp+18h] [bp-24h]@1
  int v19; // [sp+1Ch] [bp-20h]@2

  result = *(_DWORD *)(a1 + 4 * a6 + 496);
  v7 = *(_DWORD *)(a1 + 208);
  v17 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a4 + 272) + 480);
  v18 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a5 + 272) + 480);
  v16 = *(_DWORD *)(a1 + 4 * a6 + 496);
  if ( a3 > 0 )
  {
    v19 = ((_BYTE)a3 - 1) & 3;
    v8 = 1;
    result = sub_6F8149F0(
               a1,
               *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a4 + 272) + 480) + *(_DWORD *)(v7 + 4 * *(_DWORD *)a2),
               *(_DWORD *)(v7 + 4 * *(_DWORD *)a2) + *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a5 + 272) + 480),
               v16);
    if ( 1 != a3 )
    {
      if ( !(((_BYTE)a3 - 1) & 3) )
        goto LABEL_12;
      if ( v19 != 1 )
      {
        if ( v19 != 2 )
        {
          v9 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(a2 + 4));
          v8 = 2;
          sub_6F8149F0(a1, v17 + v9, v18 + v9, v16);
        }
        v10 = *(_DWORD *)(a2 + 4 * v8++);
        sub_6F8149F0(a1, v17 + *(_DWORD *)(v7 + 4 * v10), v18 + *(_DWORD *)(v7 + 4 * v10), v16);
      }
      v11 = *(_DWORD *)(a2 + 4 * v8++);
      result = sub_6F8149F0(a1, v17 + *(_DWORD *)(v7 + 4 * v11), v18 + *(_DWORD *)(v7 + 4 * v11), v16);
      if ( v8 != a3 )
      {
LABEL_12:
        do
        {
          v12 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(a2 + 4 * v8));
          sub_6F8149F0(a1, v17 + v12, v12 + v18, v16);
          v13 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(a2 + 4 * v8 + 4));
          sub_6F8149F0(a1, v17 + v13, v13 + v18, v16);
          v14 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(a2 + 4 * v8 + 8));
          sub_6F8149F0(a1, v17 + v14, v14 + v18, v16);
          v15 = *(_DWORD *)(a2 + 4 * v8 + 12);
          v8 += 4;
          result = sub_6F8149F0(a1, v17 + *(_DWORD *)(v7 + 4 * v15), *(_DWORD *)(v7 + 4 * v15) + v18, v16);
        }
        while ( v8 != a3 );
      }
    }
  }
  return result;
}
