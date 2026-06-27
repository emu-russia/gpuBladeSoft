signed int __usercall sub_6F793770@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi@1
  int v4; // ebp@2
  int v5; // ebx@2
  int v6; // eax@3
  int v7; // edx@4
  int v8; // esi@8
  signed int result; // eax@10
  int v10; // edx@9
  int v11; // ebx@9
  _BYTE *v12; // ST1C_4@9
  signed int v13; // eax@9
  signed int v14; // eax@9
  int v15; // [sp+18h] [bp-24h]@2

  v3 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 64) = 3;
  if ( !v3 )
    return 3;
  v4 = a3;
  v15 = a2;
  v5 = a1;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v6 = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)(*(_WORD *)(v6 + 20) + *(_WORD *)(v6 + 56) + 1) > *(_DWORD *)(v6 + 8) )
    {
      result = sub_6F7CA4F0(v6, 0, 1);
      if ( result )
        return result;
      v6 = *(_DWORD *)(v5 + 12);
    }
    v7 = *(_WORD *)v3;
    if ( (signed __int16)v7 > 0 )
    {
      *(_WORD *)(*(_DWORD *)(v3 + 12) + 2 * v7 - 2) = *(_WORD *)(v3 + 2) - 1;
      LOWORD(v7) = *(_WORD *)v3;
    }
    *(_WORD *)v3 = v7 + 1;
  }
  else
  {
    ++*(_WORD *)v3;
    v6 = *(_DWORD *)(a1 + 12);
  }
  if ( (unsigned int)(*(_WORD *)(v6 + 22) + *(_WORD *)(v6 + 58) + 1) <= *(_DWORD *)(v6 + 4)
    || (result = sub_6F7CA4F0(v6, 1, 0)) == 0 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    if ( *(_BYTE *)(v5 + 68) )
    {
      v10 = *(_WORD *)(v8 + 2);
      v11 = *(_DWORD *)(v8 + 4) + 8 * v10;
      v12 = (_BYTE *)(*(_DWORD *)(v8 + 8) + v10);
      LOWORD(v13) = sub_6F7C9390(v15);
      *(_DWORD *)v11 = v13 >> 16;
      LOWORD(v14) = sub_6F7C9390(v4);
      *(_DWORD *)(v11 + 4) = v14 >> 16;
      *v12 = 1;
    }
    ++*(_WORD *)(v8 + 2);
    result = 0;
  }
  return result;
}
