char *__cdecl sub_6F869890(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v4; // ecx@1
  signed int v5; // eax@1
  unsigned int v6; // edi@4
  unsigned int v7; // ebx@6
  char *v8; // eax@10
  unsigned int v9; // ecx@11
  unsigned int v10; // edx@11
  int v12; // edx@2
  int v13; // ST24_4@2
  unsigned int v14; // [sp+1Ch] [bp-2Ch]@11
  char *v15; // [sp+28h] [bp-20h]@5

  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0x3B9AC9F0 / a3;
  if ( !(0x3B9AC9F0 / a3) )
  {
    v12 = *(_DWORD *)a1;
    *(_DWORD *)(v12 + 20) = 72;
    v13 = v4;
    (*(void (__cdecl **)(int))v12)(a1);
    v4 = v13;
    v5 = 0;
  }
  if ( v5 < (signed int)a4 )
    v6 = v5;
  else
    v6 = a4;
  *(_DWORD *)(v4 + 80) = v6;
  v15 = sub_6F868FC4(a1, a2, 4 * a4);
  if ( a4 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        if ( v6 > a4 - v7 )
          v6 = a4 - v7;
        v8 = sub_6F8696EC(a1, a2, v6 * a3);
        if ( v6 )
          break;
        if ( v7 >= a4 )
          return v15;
      }
      v9 = v6;
      v10 = v7;
      v14 = v7;
      do
      {
        *(_DWORD *)&v15[4 * v10++] = v8;
        v8 += a3;
        --v9;
      }
      while ( v9 );
      v7 += v6;
    }
    while ( v6 + v14 < a4 );
  }
  return v15;
}
