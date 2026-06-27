int __cdecl sub_6F775180(int a1, const char *a2, int a3)
{
  int v3; // eax@1
  int result; // eax@4
  int v5; // eax@5
  const char *v6; // ecx@5
  int v7; // edx@5
  unsigned int v8; // edi@5
  unsigned int v9; // esi@5
  unsigned int v10; // eax@5
  int *v11; // ebx@7
  char v12; // dl@7
  int v13; // ebp@7
  int v14; // edi@10
  char v15; // ST1B_1@12
  int v16; // edx@13
  int v17; // ecx@14
  int v18; // [sp+1Ch] [bp-20h]@1

  v3 = *(_DWORD *)(a1 + 140);
  v18 = *(_DWORD *)(a1 + 140);
  if ( v3 && *(_DWORD *)(v3 + 72) && a2 )
  {
    result = 6;
    if ( !*a2 )
      return result;
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 140) + 128);
    v6 = a2;
    v7 = *a2;
    v8 = *(_DWORD *)(v5 + 4);
    v9 = *(_DWORD *)(v5 + 12);
    v10 = 0;
    do
    {
      ++v6;
      v10 = v7 + 31 * v10;
      v7 = *v6;
    }
    while ( (_BYTE)v7 );
    v11 = (int *)(v9 + 4 * (v10 % v8));
    v12 = *a2;
    v13 = v9 + 4 * v8 - 4;
    while ( 1 )
    {
      v14 = *v11;
      if ( !*v11 )
        break;
      if ( v12 == **(_BYTE **)v14 )
      {
        v15 = v12;
        result = strcmp(*(const char **)v14, a2);
        v12 = v15;
        if ( !result )
        {
          v16 = *(_DWORD *)(v18 + 80) + 16 * *(_DWORD *)(v14 + 4);
          if ( !v16 )
            return 6;
          v17 = *(_DWORD *)(v16 + 4);
          if ( v17 == 2 )
          {
            *(_DWORD *)a3 = 2;
            *(_DWORD *)(a3 + 4) = *(_DWORD *)(v16 + 12);
          }
          else if ( v17 == 3 )
          {
            *(_DWORD *)a3 = 3;
            *(_DWORD *)(a3 + 4) = *(_DWORD *)(v16 + 12);
          }
          else
          {
            if ( v17 != 1 )
              return 6;
            *(_DWORD *)a3 = 1;
            *(_DWORD *)(a3 + 4) = *(_DWORD *)(v16 + 12);
          }
          return result;
        }
      }
      --v11;
      if ( v9 > (unsigned int)v11 )
        v11 = (int *)v13;
    }
  }
  return 6;
}
