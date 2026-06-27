int __cdecl sub_6F77B4F0(int a1, int a2)
{
  int v2; // ebx@1
  int result; // eax@2
  _DWORD *v4; // edx@3
  int v5; // eax@6
  int v6; // edx@7
  int v7; // eax@8
  int v8; // edi@8
  _BYTE *v9; // eax@8
  int v10; // ecx@8
  int v11; // edx@9
  int v12; // edx@10
  int v13; // edi@10
  _BYTE *v14; // edx@10
  int v15; // ecx@10
  int v16; // eax@12
  int v17; // edi@12
  signed int v18; // ebx@12

  v2 = *(_DWORD *)(a1 + 28);
  if ( !*(_BYTE *)(v2 + 64) && (result = sub_6F77B3D0(*(_DWORD *)(a1 + 28), *(_DWORD *)a2, *(_DWORD *)(a2 + 4))) != 0
    || (v5 = *(_DWORD *)(v2 + 12), (unsigned int)(*(_WORD *)(v5 + 22) + *(_WORD *)(v5 + 58) + 3) > *(_DWORD *)(v5 + 4))
    && (result = sub_6F7CA4F0(v5, 3, 0)) != 0 )
  {
    v4 = *(_DWORD **)(a1 + 24);
    if ( !*v4 )
      *v4 = result;
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 20);
    result = *(_DWORD *)(v2 + 20);
    if ( *(_BYTE *)(v2 + 65) )
    {
      v7 = *(_WORD *)(v6 + 2);
      v8 = *(_DWORD *)(v6 + 4) + 8 * v7;
      v9 = (_BYTE *)(*(_DWORD *)(v6 + 8) + v7);
      v10 = *(_DWORD *)(a2 + 12) >> 10;
      *(_DWORD *)v8 = *(_DWORD *)(a2 + 8) >> 10;
      *(_DWORD *)(v8 + 4) = v10;
      *v9 = 2;
      result = *(_DWORD *)(v2 + 20);
    }
    ++*(_WORD *)(v6 + 2);
    v11 = result;
    if ( *(_BYTE *)(v2 + 65) )
    {
      v12 = *(_WORD *)(result + 2);
      v13 = *(_DWORD *)(result + 4) + 8 * v12;
      v14 = (_BYTE *)(*(_DWORD *)(result + 8) + v12);
      v15 = *(_DWORD *)(a2 + 20) >> 10;
      *(_DWORD *)v13 = *(_DWORD *)(a2 + 16) >> 10;
      *(_DWORD *)(v13 + 4) = v15;
      *v14 = 2;
      v11 = *(_DWORD *)(v2 + 20);
    }
    ++*(_WORD *)(result + 2);
    if ( *(_BYTE *)(v2 + 65) )
    {
      v16 = *(_WORD *)(v11 + 2);
      v17 = *(_DWORD *)(v11 + 4) + 8 * v16;
      v18 = *(_DWORD *)(a2 + 24);
      result = *(_DWORD *)(v11 + 8) + v16;
      *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 28) >> 10;
      *(_DWORD *)v17 = v18 >> 10;
      *(_BYTE *)result = 1;
    }
    ++*(_WORD *)(v11 + 2);
  }
  return result;
}
