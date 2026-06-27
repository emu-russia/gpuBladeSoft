int __cdecl sub_6F8B48C0(unsigned int a1)
{
  int v1; // esi@1
  DWORD v2; // ebp@1
  LPVOID v3; // eax@1
  _DWORD *v4; // edi@1
  _DWORD *v5; // ebx@1

  v1 = 0;
  v2 = GetLastError();
  v3 = sub_6F8B3D30();
  v4 = (char *)v3 + 56;
  v5 = v3;
  sub_6F8B35C0((volatile signed __int32 *)v3 + 14);
  if ( v5[10] > a1 && *(_BYTE *)(v5[12] + a1) )
    v1 = *(_DWORD *)(v5[11] + 4 * a1);
  sub_6F8B3600(v4);
  SetLastError(v2);
  return v1;
}
