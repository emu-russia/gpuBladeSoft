int __usercall sub_6F7AE490@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // edx@4
  int v3; // ecx@5

  if ( !a2 && !*(_DWORD *)(result + 28) )
    *(_DWORD *)(result + 12) = 132;
  v2 = *(_DWORD *)(result + 360) + a2;
  *(_DWORD *)(result + 360) = v2;
  if ( v2 < 0
    || (v3 = *(_DWORD *)(result + 428), v3 > 0)
    && v2 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(result + 436) + 16 * (v3 + 0xFFFFFFF) + 12) + 8) )
  {
    *(_DWORD *)(result + 12) = 132;
  }
  *(_BYTE *)(result + 376) = 0;
  return result;
}
