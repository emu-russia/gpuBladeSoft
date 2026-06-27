void __thiscall sub_6F9615C0(char *this)
{
  char *v1; // ecx@1
  char *v2; // eax@1
  char *v3; // ebx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  v2 = (char *)*((_DWORD *)v1 + 12);
  v3 = v1;
  *(_DWORD *)v1 = off_6FBAFE4C;
  *((_DWORD *)v1 + 18) = off_6FBAFE74;
  *((_DWORD *)v1 + 2) = off_6FBAFE60;
  *((_DWORD *)v1 + 3) = off_6FBAFC20;
  if ( v2 != v1 + 56 )
    j_free_1(v2);
  *((_DWORD *)v3 + 3) = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)v3 + 10);
  *((_DWORD *)v3 + 2) = &unk_6FBABB0C;
  *(_DWORD *)v3 = &unk_6FBABAE4;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 18) = off_6FBB0FC0;
  sub_6F956920((_DWORD *)v3 + 18);
}
