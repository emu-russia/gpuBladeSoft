int __cdecl sub_6F874800(int a1, int a2)
{
  int result; // eax@1
  int v3; // edx@6
  _DWORD *v4; // edi@10
  int v5; // edx@10
  int v6; // ecx@10
  int v7; // eax@11
  int v8; // ebx@12
  int v9; // eax@14
  int v10; // ST20_4@14
  _DWORD *v11; // esi@14
  int v12; // eax@14
  _DWORD *v13; // ebx@14
  _DWORD *v14; // ecx@14
  _DWORD *v15; // edx@14
  int v16; // eax@14
  _DWORD *v17; // edx@17
  int v18; // eax@17
  int v19; // [sp+4h] [bp-44h]@9
  int v20; // [sp+8h] [bp-40h]@9
  int v21; // [sp+Ch] [bp-3Ch]@9
  int v22; // [sp+10h] [bp-38h]@8
  signed int v23; // [sp+14h] [bp-34h]@8
  int v24; // [sp+18h] [bp-30h]@1
  int v25; // [sp+1Ch] [bp-2Ch]@8
  int v26; // [sp+24h] [bp-24h]@9
  int v27; // [sp+28h] [bp-20h]@10

  result = a1;
  v24 = *(_DWORD *)(a1 + 404);
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      result = *(_DWORD *)(a1 + 404);
      *(_DWORD *)(v24 + 4) = sub_6F874D6C;
    }
    else
    {
      v3 = *(_DWORD *)a1;
      *(_DWORD *)(v3 + 20) = 3;
      result = (*(int (__cdecl **)(int))v3)(a1);
    }
  }
  else
  {
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 432) + 8) )
    {
      *(_DWORD *)(v24 + 4) = sub_6F874A44;
      v23 = *(_DWORD *)(a1 + 284);
      v25 = *(_DWORD *)(a1 + 196);
      result = *(_DWORD *)(a1 + 36);
      v22 = result;
      if ( result > 0 )
      {
        v21 = *(_DWORD *)(v24 + 56);
        v20 = *(_DWORD *)(v24 + 60);
        v19 = *(_DWORD *)(a1 + 284) + 2;
        v26 = 0;
        while ( 1 )
        {
          v27 = *(_DWORD *)(v25 + 12) * *(_DWORD *)(v25 + 40) / v23;
          v4 = *(_DWORD **)(v21 + 4 * v26);
          v5 = *(_DWORD *)(v20 + 4 * v26);
          v6 = *(_DWORD *)(v24 + 4 * v26 + 8);
          if ( v19 * v27 > 0 )
          {
            v7 = 0;
            do
            {
              v8 = *(_DWORD *)(v6 + 4 * v7);
              *(_DWORD *)(v5 + 4 * v7) = v8;
              v4[v7++] = v8;
            }
            while ( v7 != v19 * v27 );
          }
          if ( 2 * v27 > 0 )
          {
            v9 = 4 * v23 * v27;
            v10 = v9;
            v11 = (_DWORD *)(v6 + v9);
            v12 = 4 * (v23 - 2) * v27;
            v13 = (_DWORD *)(v5 + v12);
            v14 = (_DWORD *)(v12 + v6);
            v15 = (_DWORD *)(v10 + v5);
            v16 = 0;
            do
            {
              *v13 = *v11;
              *v15 = *v14;
              ++v16;
              ++v11;
              ++v13;
              ++v14;
              ++v15;
            }
            while ( v16 != 2 * v27 );
          }
          if ( v27 > 0 )
          {
            v17 = &v4[-v27];
            v18 = 0;
            do
            {
              *v17 = *v4;
              ++v18;
              ++v17;
            }
            while ( v18 != v27 );
          }
          ++v26;
          result = v22;
          if ( v26 == v22 )
            break;
          v25 += 88;
        }
      }
      *(_DWORD *)(v24 + 64) = 0;
      *(_DWORD *)(v24 + 68) = 0;
      *(_DWORD *)(v24 + 76) = 0;
    }
    else
    {
      *(_DWORD *)(v24 + 4) = sub_6F8749B4;
    }
    *(_BYTE *)(v24 + 48) = 0;
    *(_DWORD *)(v24 + 52) = 0;
  }
  return result;
}
