volatile signed __int32 *__thiscall sub_6F92E050(char *this, int a2)
{
  char *v2; // ecx@1

  *(_DWORD *)this = off_6FBB06B4;
  v2 = this + 28;
  *((_DWORD *)v2 - 6) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)v2 - 5) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)v2 - 4) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)v2 - 3) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)v2 - 2) = *(_DWORD *)(a2 + 20);
  *((_DWORD *)v2 - 1) = *(_DWORD *)(a2 + 24);
  return sub_6F938240(v2, (volatile signed __int32 **)(a2 + 28));
}
