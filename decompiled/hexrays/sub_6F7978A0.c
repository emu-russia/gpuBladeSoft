int __usercall sub_6F7978A0@<eax>(int result@<eax>, int a2@<edx>, _BYTE *a3@<ecx>)
{
  int v3; // edx@1
  unsigned int i; // ebx@1
  int v5; // ebp@4
  int v6; // edx@4
  signed int v7; // ebx@4
  signed int v8; // esi@5
  int v9; // esi@7
  int v10; // edi@7
  int v11; // ebp@13
  int *v12; // ebx@15
  int v13; // eax@15
  _DWORD *v14; // ecx@16
  int v15; // esi@16
  int v16; // edx@17
  int v17; // [sp+0h] [bp-20h]@1
  int v18; // [sp+0h] [bp-20h]@14
  signed int v19; // [sp+4h] [bp-1Ch]@14
  signed int v20; // [sp+8h] [bp-18h]@4
  int v21; // [sp+8h] [bp-18h]@14
  unsigned int v22; // [sp+Ch] [bp-14h]@1

  v17 = a2;
  v3 = *(_DWORD *)(result + 8);
  v22 = *(_DWORD *)result;
  for ( i = *(_DWORD *)result; i; --i )
  {
    *(_DWORD *)(v3 + 16) &= 0xFFFFFFFB;
    *(_DWORD *)(v3 + 24) = -1;
    v3 += 28;
  }
  if ( v17 )
  {
    v5 = 0;
    v20 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v7 )
      {
        v8 = v7;
        v7 >>= 1;
      }
      else
      {
        v5 = *a3;
        v7 = 64;
        ++a3;
        v8 = 128;
      }
      if ( v5 & v8 )
      {
        v9 = *(_DWORD *)(result + 8) + 28 * v6;
        v10 = *(_DWORD *)(v9 + 16);
        if ( !(v10 & 4) )
        {
          *(_DWORD *)(v9 + 16) = v10 | 4;
          if ( v22 > v20 )
            *(_DWORD *)(*(_DWORD *)(result + 12) + 4 * v20++) = v9;
        }
      }
      ++v6;
    }
    while ( v6 != v17 );
    *(_DWORD *)(result + 4) = v20;
    v11 = *(_DWORD *)(result + 12);
    if ( v20 > 1 )
    {
      v19 = -4;
      v18 = 0;
      v21 = v20 - 1;
      do
      {
        v12 = *(int **)(v11 + 4);
        v13 = v18;
        if ( v18 >= 0 )
        {
          v14 = *(_DWORD **)v11;
          v15 = *v12;
          if ( *v12 <= **(_DWORD **)v11 )
          {
            v16 = v11 - 4;
            do
            {
              *(_DWORD *)(v16 + 8) = v14;
              *(_DWORD *)(v11 + v19 + 4 * v13-- + 4) = v12;
              if ( v13 == -1 )
                break;
              v14 = *(_DWORD **)v16;
              v16 -= 4;
            }
            while ( *v14 >= v15 );
          }
        }
        ++v18;
        v11 += 4;
        v19 -= 4;
        result = v18;
      }
      while ( v18 != v21 );
    }
  }
  else
  {
    *(_DWORD *)(result + 4) = 0;
  }
  return result;
}
