int __usercall sub_6F77B3D0@<eax>(int a1@<eax>, signed int a2@<edx>, signed int a3@<ecx>)
{
  int v3; // ebx@1
  bool v4; // zf@1
  int v5; // esi@1
  int v6; // eax@2
  int v7; // eax@3
  int v8; // eax@6
  int v9; // eax@7
  int v10; // ebx@8
  int v11; // esi@8
  _BYTE *v12; // ebx@8
  int result; // eax@9
  signed int v14; // ST1C_4@11
  signed int v15; // ST18_4@11
  signed int v16; // ST1C_4@13
  signed int v17; // ST18_4@13

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 65) == 0;
  *(_BYTE *)(a1 + 64) = 1;
  v5 = *(_DWORD *)(a1 + 20);
  if ( v4 )
  {
    ++*(_WORD *)v5;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)(*(_WORD *)(v6 + 20) + *(_WORD *)(v6 + 56) + 1) > *(_DWORD *)(v6 + 8) )
    {
      v14 = a3;
      v15 = a2;
      result = sub_6F7CA4F0(v6, 0, 1);
      a2 = v15;
      a3 = v14;
      if ( result )
        return result;
    }
    v7 = *(_WORD *)v5;
    if ( (signed __int16)v7 > 0 )
    {
      *(_WORD *)(*(_DWORD *)(v5 + 12) + 2 * v7 - 2) = *(_WORD *)(v5 + 2) - 1;
      LOWORD(v7) = *(_WORD *)v5;
    }
    *(_WORD *)v5 = v7 + 1;
  }
  v8 = *(_DWORD *)(v3 + 12);
  if ( (unsigned int)(*(_WORD *)(v8 + 22) + *(_WORD *)(v8 + 58) + 1) <= *(_DWORD *)(v8 + 4)
    || (v16 = a3, v17 = a2, result = sub_6F7CA4F0(v8, 1, 0), a2 = v17, a3 = v16, !result) )
  {
    v9 = *(_DWORD *)(v3 + 20);
    if ( *(_BYTE *)(v3 + 65) )
    {
      v10 = *(_WORD *)(v9 + 2);
      v11 = *(_DWORD *)(v9 + 4) + 8 * v10;
      v12 = (_BYTE *)(*(_DWORD *)(v9 + 8) + v10);
      *(_DWORD *)v11 = a2 >> 10;
      *(_DWORD *)(v11 + 4) = a3 >> 10;
      *v12 = 1;
    }
    ++*(_WORD *)(v9 + 2);
    result = 0;
  }
  return result;
}
