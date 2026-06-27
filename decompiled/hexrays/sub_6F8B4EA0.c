int __cdecl sub_6F8B4EA0(DWORD a1)
{
  _DWORD *v1; // eax@1
  _DWORD *v2; // esi@2
  void *v3; // eax@2
  int result; // eax@4

  v1 = sub_6F8B3D30();
  if ( a1 )
  {
    v2 = v1;
    sub_6F8B4D50();
    v3 = (void *)v2[6];
    if ( v3 )
      WaitForSingleObject(v3, a1);
    else
      Sleep(a1);
    sub_6F8B4D50();
    result = 0;
  }
  else
  {
    sub_6F8B4D50();
    Sleep(0);
    sub_6F8B4D50();
    result = 0;
  }
  return result;
}
