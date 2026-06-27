signed int __cdecl sub_6F76C4C0(int a1, int a2, char a3, _DWORD *a4)
{
  signed int result; // eax@1
  int v5; // eax@4
  int v6; // edi@5
  signed int v7; // ebp@5
  int v8; // eax@5
  int v9; // ebx@5
  int v10; // eax@6
  int v11; // ebp@7
  int v12; // edx@7
  int v13; // ebp@11
  unsigned int v14; // ebx@11
  unsigned int v15; // edi@11
  int v16; // ecx@12
  _DWORD *v17; // edx@12

  result = 35;
  if ( *(_BYTE *)(a1 + 8) & 2 )
  {
    result = 7;
    if ( !*(_DWORD *)a2 )
    {
      v5 = *(_DWORD *)(a2 + 12);
      if ( v5 )
      {
        v6 = *(_DWORD *)(a2 + 4);
        v7 = v6 * v5 + 36;
        v8 = a2;
        v9 = v7 / 72;
      }
      else
      {
        v8 = a2;
        v9 = *(_DWORD *)(a2 + 4);
        v6 = *(_DWORD *)(a2 + 4);
      }
      v10 = *(_DWORD *)(v8 + 16);
      if ( v10 )
      {
        v11 = *(_DWORD *)(a2 + 8);
        v12 = (v11 * v10 + 36) / 72;
      }
      else
      {
        v12 = *(_DWORD *)(a2 + 8);
        v11 = *(_DWORD *)(a2 + 8);
      }
      if ( v6 )
      {
        if ( !v11 )
          v12 = v9;
      }
      else if ( v11 )
      {
        v9 = v12;
      }
      v13 = *(_DWORD *)(a1 + 28);
      v14 = (v9 + 32) & 0xFFFFFFC0;
      v15 = (v12 + 32) & 0xFFFFFFC0;
      if ( v13 <= 0 )
      {
LABEL_19:
        result = 23;
      }
      else
      {
        v16 = 0;
        v17 = (_DWORD *)(*(_DWORD *)(a1 + 32) + 12);
        while ( v15 != ((*v17 + 32) & 0xFFFFFFC0) || ((*(v17 - 1) + 32) & 0xFFFFFFC0) != v14 && !a3 )
        {
          ++v16;
          v17 += 4;
          if ( v16 == v13 )
            goto LABEL_19;
        }
        if ( a4 )
        {
          *a4 = v16;
          result = 0;
        }
        else
        {
          result = 0;
        }
      }
    }
  }
  return result;
}
