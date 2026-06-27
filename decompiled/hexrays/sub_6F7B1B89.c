void __usercall sub_6F7B1B89(int a1@<ecx>, int a2@<ebp>)
{
  int v2; // eax@1
  int v3; // eax@2

  v2 = *(_DWORD *)(a1 + 4 * a2);
  JUMPOUT(v2, a2, sub_6F7B3082);
  JUMPOUT(v2, 0, sub_6F7B3082);
  v3 = *(_DWORD *)(a1 + 4 * (a2 - v2));
  JUMPOUT(&loc_6F7B10D0);
}
