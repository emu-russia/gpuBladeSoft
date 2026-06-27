int __usercall sub_6F8635DC@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  int v4; // edx@3
  int result; // eax@3
  int v6; // esi@9
  int v7; // edi@9
  unsigned __int8 v8; // ST1F_1@9
  int v9; // ecx@9
  int v10; // edx@9
  int v11; // ST18_4@9

  if ( a3 <= 0xB
    || *(_BYTE *)a2 != 65
    || *(_BYTE *)(a2 + 1) != 100
    || *(_BYTE *)(a2 + 2) != 111
    || *(_BYTE *)(a2 + 3) != 98
    || *(_BYTE *)(a2 + 4) != 101 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 80;
    *(_DWORD *)(v4 + 24) = a4 + a3;
    result = (*(int (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 1);
  }
  else
  {
    v6 = (*(_BYTE *)(a2 + 7) << 8) + *(_BYTE *)(a2 + 8);
    v7 = (*(_BYTE *)(a2 + 9) << 8) + *(_BYTE *)(a2 + 10);
    v8 = *(_BYTE *)(a2 + 11);
    v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 24) = (*(_BYTE *)(a2 + 5) << 8) + *(_BYTE *)(a2 + 6);
    *(_DWORD *)(v9 + 28) = v6;
    *(_DWORD *)(v9 + 32) = v7;
    *(_DWORD *)(v9 + 36) = v8;
    v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 20) = 78;
    v11 = a1;
    (*(void (__cdecl **)(int, signed int))(v10 + 4))(a1, 1);
    result = v11;
    *(_BYTE *)(v11 + 264) = 1;
    *(_BYTE *)(v11 + 265) = v8;
  }
  return result;
}
