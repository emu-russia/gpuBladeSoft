void __cdecl __noreturn sub_6F769150(int a1, int a2)
{
  *(_DWORD *)(a1 + 76) = a2;
  longjmp(a1, 1);
}
