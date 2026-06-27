int __usercall sub_6F896E30@<eax>(int a1@<eax>)
{
  _BYTE *v1; // edx@1
  int v2; // ebx@1
  int result; // eax@3

  v1 = *(_BYTE **)(a1 + 12);
  v2 = a1;
  if ( *v1 == 95 )
  {
    result = 0;
LABEL_5:
    *(_DWORD *)(v2 + 12) = v1 + 1;
    return result;
  }
  if ( *v1 != 110 )
  {
    result = sub_6F896D30((_DWORD *)(a1 + 12)) + 1;
    if ( result >= 0 )
    {
      v1 = *(_BYTE **)(v2 + 12);
      if ( *v1 == 95 )
        goto LABEL_5;
    }
  }
  return -1;
}
