void __thiscall sub_6F961A00(char *this)
{
  char *v1; // ecx@1
  char *v2; // eax@1
  char *v3; // ebx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  v2 = (char *)*((_DWORD *)v1 + 10);
  v3 = v1;
  *(_DWORD *)v1 = off_6FBAFF3C;
  *((_DWORD *)v1 + 16) = off_6FBAFF50;
  *((_DWORD *)v1 + 1) = off_6FBAFC60;
  if ( v2 != v1 + 48 )
    j_free_1(v2);
  *((_DWORD *)v3 + 1) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)v3 + 8);
  *(_DWORD *)v3 = &unk_6FBABC38;
  *((_DWORD *)v3 + 16) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)v3 + 16);
}
