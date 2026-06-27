char __usercall sub_6F9681BC@<al>(int a1@<eax>, int a2@<edx>, void (__cdecl *a3)(unsigned int)@<ecx>, int a4, int a5)
{
  int v5; // esi@1
  int v6; // ebx@1
  char v7; // di@3
  char result; // al@3

  v5 = a1;
  v6 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(v6 + 4) = -*(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 12) = -*(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 20) = -*(_DWORD *)(v6 + 20);
  if ( a2 > 2 )
    *(_DWORD *)(v6 + 28) = -*(_DWORD *)(v6 + 28);
  v7 = *(_BYTE *)(a1 + 86);
  result = sub_6F968036(a1, a2, a3, -a5, -a4);
  if ( v7 && !*(_BYTE *)(v5 + 86) )
    *(_DWORD *)(*(_DWORD *)(v5 + 88) + 20) = -*(_DWORD *)(*(_DWORD *)(v5 + 88) + 20);
  *(_DWORD *)(v6 + 4) = -*(_DWORD *)(v6 + 4);
  return result;
}
