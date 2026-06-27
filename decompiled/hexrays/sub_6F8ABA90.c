int __usercall sub_6F8ABA90@<eax>(const char *a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  const char *v3; // ebx@1
  signed int v4; // eax@3
  int v5; // eax@4
  int result; // eax@4
  int v7; // eax@5

  v2 = a2;
  v3 = a1;
  if ( !a1 )
    v3 = "(null)";
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 < 0 )
  {
    v7 = strlen(v3);
    result = sub_6F8AB9D0((int)v3, v7, v2);
  }
  else
  {
    v5 = sub_6F8B14A0(v3, v4);
    result = sub_6F8AB9D0((int)v3, v5, v2);
  }
  return result;
}
