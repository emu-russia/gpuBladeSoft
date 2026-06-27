int __usercall sub_6F892000@<eax>(int result@<eax>)
{
  signed int v1; // edx@1
  int v2; // edx@3
  int v3; // ebx@3
  int v4; // edx@5
  int v5; // ebx@5
  int v6; // edx@5
  int v7; // ecx@5

  v1 = *(_DWORD *)(result + 5820);
  if ( v1 > 8 )
  {
    v4 = *(_DWORD *)(result + 20);
    v5 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v4 + 1;
    *(_BYTE *)(v5 + v4) = *(_WORD *)(result + 5816);
    v6 = *(_DWORD *)(result + 20);
    v7 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v6 + 1;
    *(_BYTE *)(v7 + v6) = *(_BYTE *)(result + 5817);
  }
  else if ( v1 > 0 )
  {
    v2 = *(_DWORD *)(result + 20);
    v3 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v2 + 1;
    *(_BYTE *)(v3 + v2) = *(_WORD *)(result + 5816);
  }
  *(_WORD *)(result + 5816) = 0;
  *(_DWORD *)(result + 5820) = 0;
  return result;
}
