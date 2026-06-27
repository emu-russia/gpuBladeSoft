unsigned int __cdecl sub_6F86C0F4(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // eax@1
  unsigned int result; // eax@1
  int v9; // esi@2
  int v10; // ecx@3
  int v11; // eax@4
  signed int v12; // ebx@6
  int v13; // edx@6
  signed int v14; // eax@7
  signed int v15; // eax@11
  void (__cdecl *v16)(char *, int, int); // [sp+10h] [bp-128h]@1
  unsigned int v17; // [sp+18h] [bp-120h]@2
  int v18; // [sp+1Ch] [bp-11Ch]@1
  char v19[280]; // [sp+20h] [bp-118h]@3

  v7 = *(_DWORD *)(a1 + 400);
  v16 = *(void (__cdecl **)(char *, int, int))(v7 + 4 * *(_DWORD *)(a2 + 4) + 44);
  v18 = *(_DWORD *)(v7 + 4 * *(_DWORD *)(a2 + 16) + 84);
  result = a7;
  if ( !a7 )
    return result;
  v17 = 0;
  v9 = a4;
  while ( 2 )
  {
    v16(v19, a3 + 4 * a5, a6);
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v18 + 4 * v10);
        v13 = *(_DWORD *)&v19[4 * v10];
        if ( v13 < 0 )
        {
          v15 = (v12 >> 1) - v13;
          if ( v12 > v15 )
            LOWORD(v11) = 0;
          else
            v11 = -(v15 / v12);
          goto LABEL_5;
        }
        v14 = v13 + (v12 >> 1);
        if ( v12 > v14 )
          break;
        v11 = v14 / v12;
LABEL_5:
        *(_WORD *)(v9 + 2 * v10++) = v11;
        if ( v10 == 64 )
          goto LABEL_9;
      }
      *(_WORD *)(v9 + 2 * v10++) = 0;
    }
    while ( v10 != 64 );
LABEL_9:
    ++v17;
    result = *(_DWORD *)(a2 + 36);
    v9 += 128;
    if ( a7 > v17 )
    {
      a6 += result;
      continue;
    }
    return result;
  }
}
