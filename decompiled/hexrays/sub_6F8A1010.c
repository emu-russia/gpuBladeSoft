int __usercall sub_6F8A1010@<eax>(int a1@<eax>)
{
  int v1; // eax@1
  int result; // eax@2

  v1 = *(_DWORD *)(a1 + 60) + a1;
  if ( *(_DWORD *)v1 == 17744 )
    result = *(_WORD *)(v1 + 24) == 267;
  else
    result = 0;
  return result;
}
