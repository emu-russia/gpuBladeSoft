int __usercall sub_6F8AB850@<eax>(int result@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // ecx@2
  int v4; // ST1C_4@6

  v2 = *(_DWORD *)(a2 + 4);
  if ( !(BYTE1(v2) & 0x40) )
  {
    v3 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 36) <= v3 )
      goto LABEL_5;
  }
  if ( !(BYTE1(v2) & 0x20) )
  {
    *(_BYTE *)(*(_DWORD *)a2 + *(_DWORD *)(a2 + 32)) = result;
    v3 = *(_DWORD *)(a2 + 32);
LABEL_5:
    *(_DWORD *)(a2 + 32) = v3 + 1;
    return result;
  }
  v4 = a2;
  result = fputc((unsigned __int8)result, *(FILE **)a2);
  ++*(_DWORD *)(v4 + 32);
  return result;
}
