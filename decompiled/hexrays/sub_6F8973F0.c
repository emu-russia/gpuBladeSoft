int __usercall sub_6F8973F0@<eax>(int a1@<eax>, int *a2@<edx>)
{
  int v2; // ecx@1
  int v3; // edx@2
  int result; // eax@2

  v2 = *(_DWORD *)(a1 + 272);
  if ( v2 )
  {
    v3 = *a2;
    result = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 12);
    if ( v3 >= 0 )
      result = sub_6F8973B0(result, v3);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 1;
    result = 0;
  }
  return result;
}
