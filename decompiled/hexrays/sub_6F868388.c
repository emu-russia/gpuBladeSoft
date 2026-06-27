int __cdecl sub_6F868388(int a1, int a2, int a3, int a4)
{
  int result; // eax@1
  int v5; // ebx@3
  int v6; // edi@4
  signed int v7; // edx@6
  signed int v8; // ecx@6
  _WORD *v9; // esi@6
  int v10; // [sp+4h] [bp-20h]@2
  int v11; // [sp+8h] [bp-1Ch]@1
  int v12; // [sp+Ch] [bp-18h]@3
  int v13; // [sp+10h] [bp-14h]@1
  signed int v14; // [sp+14h] [bp-10h]@6

  v11 = *(_DWORD *)(*(_DWORD *)(a1 + 440) + 24);
  result = *(_DWORD *)(a1 + 92);
  v13 = *(_DWORD *)(a1 + 92);
  if ( a4 > 0 )
  {
    v10 = 0;
    do
    {
      v5 = *(_DWORD *)(a2 + 4 * v10);
      v12 = *(_DWORD *)(a3 + 4 * v10);
      if ( v13 )
      {
        v6 = 0;
        do
        {
          while ( 1 )
          {
            v7 = (unsigned __int8)(*(_BYTE *)v5 >> 3);
            v8 = (unsigned __int8)(*(_BYTE *)(v5 + 1) >> 2);
            v14 = (unsigned __int8)(*(_BYTE *)(v5 + 2) >> 3);
            v5 += 3;
            v9 = (_WORD *)(*(_DWORD *)(v11 + 4 * v7) + 2 * (v14 + 32 * v8));
            if ( !*v9 )
              break;
            *(_BYTE *)(v12 + v6++) = *v9 - 1;
            if ( v13 == v6 )
              goto LABEL_8;
          }
          sub_6F867E14(a1, v7, v8, v14);
          *(_BYTE *)(v12 + v6++) = *v9 - 1;
        }
        while ( v13 != v6 );
      }
LABEL_8:
      result = ++v10;
    }
    while ( a4 > v10 );
  }
  return result;
}
