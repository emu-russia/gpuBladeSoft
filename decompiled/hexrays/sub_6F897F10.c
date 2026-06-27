int __usercall sub_6F897F10@<eax>(int a1@<eax>)
{
  _BYTE *v1; // ecx@1
  int v2; // ecx@2
  int result; // eax@2

  v1 = *(_BYTE **)(a1 + 12);
  if ( (unsigned __int8)(*v1 - 73) > 1u )
  {
    result = 0;
  }
  else
  {
    v2 = (int)(v1 + 1);
    *(_DWORD *)(a1 + 12) = v2;
    result = sub_6F897E00(a1, v2);
  }
  return result;
}
