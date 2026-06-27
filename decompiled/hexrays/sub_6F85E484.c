signed int __usercall sub_6F85E484@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // eax@1
  int v3; // esi@5
  int v4; // ecx@6
  unsigned int v5; // edi@6
  int v6; // edx@6
  int v7; // edx@8
  int v8; // eax@13
  int v9; // edx@13
  signed int result; // eax@17
  int v11; // eax@11
  int v12; // ecx@22
  unsigned int v13; // eax@22
  int v14; // edx@22
  int v15; // edx@3
  int v16; // [sp+18h] [bp-20h]@6
  unsigned int v17; // [sp+1Ch] [bp-1Ch]@6

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 272);
  if ( v2 == 1 )
  {
    v12 = *(_DWORD *)(v1 + 276);
    *(_DWORD *)(v1 + 292) = *(_DWORD *)(v12 + 28);
    v13 = *(_DWORD *)(v12 + 32);
    *(_DWORD *)(v1 + 296) = v13;
    *(_DWORD *)(v12 + 56) = 1;
    *(_DWORD *)(v12 + 60) = 1;
    *(_DWORD *)(v12 + 64) = 1;
    *(_DWORD *)(v12 + 68) = *(_DWORD *)(v12 + 36);
    *(_DWORD *)(v12 + 72) = 1;
    v14 = v13 % *(_DWORD *)(v12 + 12);
    if ( !v14 )
      v14 = *(_DWORD *)(v12 + 12);
    *(_DWORD *)(v12 + 76) = v14;
    *(_DWORD *)(v1 + 300) = 1;
    *(_DWORD *)(v1 + 304) = 0;
  }
  else
  {
    if ( (unsigned int)(v2 - 1) > 3 )
    {
      v15 = *(_DWORD *)v1;
      *(_DWORD *)(v15 + 20) = 27;
      *(_DWORD *)(v15 + 24) = v2;
      *(_DWORD *)(*(_DWORD *)v1 + 28) = 4;
      (**(void (__cdecl ***)(_DWORD))v1)(v1);
    }
    *(_DWORD *)(v1 + 292) = sub_6F868CC4(*(_DWORD *)(v1 + 64), *(_DWORD *)(v1 + 252) * *(_DWORD *)(v1 + 360));
    *(_DWORD *)(v1 + 296) = sub_6F868CC4(*(_DWORD *)(v1 + 68), *(_DWORD *)(v1 + 256) * *(_DWORD *)(v1 + 360));
    *(_DWORD *)(v1 + 300) = 0;
    if ( *(_DWORD *)(v1 + 272) > 0 )
    {
      v3 = 0;
      do
      {
        v4 = *(_DWORD *)(v1 + 4 * v3 + 276);
        v5 = *(_DWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 56) = v5;
        v17 = *(_DWORD *)(v4 + 12);
        *(_DWORD *)(v4 + 60) = v17;
        v16 = v5 * v17;
        *(_DWORD *)(v4 + 64) = v5 * v17;
        *(_DWORD *)(v4 + 68) = v5 * *(_DWORD *)(v4 + 36);
        v6 = *(_DWORD *)(v4 + 28) % v5;
        if ( !v6 )
          v6 = v5;
        *(_DWORD *)(v4 + 72) = v6;
        v7 = *(_DWORD *)(v4 + 32) % v17;
        if ( !v7 )
          v7 = v17;
        *(_DWORD *)(v4 + 76) = v7;
        if ( *(_DWORD *)(v1 + 300) + v16 > 10 )
        {
          v11 = *(_DWORD *)v1;
          *(_DWORD *)(v11 + 20) = 14;
          (*(void (__cdecl **)(int))v11)(v1);
        }
        if ( v16 > 0 )
        {
          v8 = *(_DWORD *)(v1 + 300);
          v9 = v8 + v16;
          do
            *(_DWORD *)(v1 + 4 * v8++ + 304) = v3;
          while ( v8 != v9 );
          *(_DWORD *)(v1 + 300) = v8;
        }
        ++v3;
      }
      while ( *(_DWORD *)(v1 + 272) > v3 );
    }
  }
  result = *(_DWORD *)(v1 + 228);
  if ( result > 0 )
  {
    result *= *(_DWORD *)(v1 + 292);
    if ( result > 0xFFFF )
      result = 0xFFFF;
    *(_DWORD *)(v1 + 224) = result;
  }
  return result;
}
