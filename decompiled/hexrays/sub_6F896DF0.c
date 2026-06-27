int __usercall sub_6F896DF0@<eax>(int a1@<eax>)
{
  int v1; // edx@1
  int v2; // ebx@2
  int v3; // eax@2
  int v4; // ebx@2
  int result; // eax@2

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 >= *(_DWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 20);
    v3 = a1 + 12;
    v4 = *(_DWORD *)(v3 + 4) + 16 * v2;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v3 + 8) = v1 + 1;
    *(_DWORD *)v4 = 65;
    *(_DWORD *)(v4 + 8) = sub_6F896D30((_DWORD *)v3);
    result = v4;
  }
  return result;
}
