#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8a52b834, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6a5fa363, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xe800eff0, __VMLINUX_SYMBOL_STR(yield_to) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x7a97796b, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xbe018104, __VMLINUX_SYMBOL_STR(vma_kernel_pagesize) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x449dacb3, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x2afea1b1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x41e643d4, __VMLINUX_SYMBOL_STR(eventfd_ctx_fileget) },
	{ 0x41f637cc, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97c96987, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf80a54a8, __VMLINUX_SYMBOL_STR(iommu_attach_device) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x84cd0220, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xdf6f05e6, __VMLINUX_SYMBOL_STR(cpufreq_get_policy) },
	{ 0xb7feca88, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xf6ab9e5d, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xae153286, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xfa35044a, __VMLINUX_SYMBOL_STR(alternatives_patched) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xb308499f, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x66d804b1, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x70784454, __VMLINUX_SYMBOL_STR(pci_intx_mask_supported) },
	{ 0xb76cbd92, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc48f77d9, __VMLINUX_SYMBOL_STR(get_task_pid) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xd73f4fb, __VMLINUX_SYMBOL_STR(perf_event_release_kernel) },
	{ 0xef6d007a, __VMLINUX_SYMBOL_STR(sigset_from_compat) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x6c0dae5, __VMLINUX_SYMBOL_STR(__kernel_fpu_end) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7973b388, __VMLINUX_SYMBOL_STR(fpu__activate_curr) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x62070c39, __VMLINUX_SYMBOL_STR(preempt_notifier_unregister) },
	{ 0xbd100793, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x4fe3c25f, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0x975eb0fb, __VMLINUX_SYMBOL_STR(pci_check_and_unmask_intx) },
	{ 0x9a7a8e24, __VMLINUX_SYMBOL_STR(iommu_map) },
	{ 0x4c4f1833, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xb23356cc, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x3a927111, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xf9b15e8a, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x5f2da8c4, __VMLINUX_SYMBOL_STR(check_tsc_unstable) },
	{ 0x9a8a3988, __VMLINUX_SYMBOL_STR(mmu_notifier_register) },
	{ 0x32bc0fcf, __VMLINUX_SYMBOL_STR(preempt_notifier_dec) },
	{ 0x4c2a472b, __VMLINUX_SYMBOL_STR(__static_cpu_has_safe) },
	{ 0xbf70c548, __VMLINUX_SYMBOL_STR(__srcu_read_unlock) },
	{ 0x7452adff, __VMLINUX_SYMBOL_STR(user_return_notifier_register) },
	{ 0x8bcb84f7, __VMLINUX_SYMBOL_STR(pci_load_and_free_saved_state) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc6d4690d, __VMLINUX_SYMBOL_STR(hrtimer_get_remaining) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x65d9e877, __VMLINUX_SYMBOL_STR(cpufreq_register_notifier) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb9a0aa66, __VMLINUX_SYMBOL_STR(__get_user_pages_fast) },
	{ 0x6b2d3a86, __VMLINUX_SYMBOL_STR(get_user_pages_unlocked) },
	{ 0xccea4e34, __VMLINUX_SYMBOL_STR(perf_get_x86_pmu_capability) },
	{ 0xcdb7d12, __VMLINUX_SYMBOL_STR(__kernel_fpu_begin) },
	{ 0xf721824d, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x74094b7c, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xd60c201f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7857524b, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x80aff2e0, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x3d36ae92, __VMLINUX_SYMBOL_STR(flush_kthread_work) },
	{ 0x92449f6b, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x6923ce63, __VMLINUX_SYMBOL_STR(irq_work_sync) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7ebd4be4, __VMLINUX_SYMBOL_STR(trace_print_flags_seq) },
	{ 0xc1af4021, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xb4b97c90, __VMLINUX_SYMBOL_STR(pvclock_gtod_register_notifier) },
	{ 0x26948d96, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0xaef35892, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x87c58a96, __VMLINUX_SYMBOL_STR(smp_call_function_many) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x7c46233a, __VMLINUX_SYMBOL_STR(cpufreq_quick_get) },
	{ 0xe910d952, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0xe36c6952, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xfcab2e08, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0xcd797565, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xc80b9cfb, __VMLINUX_SYMBOL_STR(pci_reset_function) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x56398615, __VMLINUX_SYMBOL_STR(mark_tsc_unstable) },
	{ 0x6214aef2, __VMLINUX_SYMBOL_STR(cpufreq_unregister_notifier) },
	{ 0x4248ae3c, __VMLINUX_SYMBOL_STR(single_task_running) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb9c425de, __VMLINUX_SYMBOL_STR(register_syscore_ops) },
	{ 0x53415b8b, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x44d30168, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x98fb9fea, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x74a3843e, __VMLINUX_SYMBOL_STR(synchronize_srcu_expedited) },
	{ 0xd820c283, __VMLINUX_SYMBOL_STR(eventfd_ctx_remove_wait_queue) },
	{ 0x58ef1b17, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2fea2ae, __VMLINUX_SYMBOL_STR(rcu_note_context_switch) },
	{ 0xb98c620e, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1294d80a, __VMLINUX_SYMBOL_STR(get_xsave_addr) },
	{ 0x77d175b3, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x206dbf8e, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe9910247, __VMLINUX_SYMBOL_STR(pci_store_saved_state) },
	{ 0xb5f17edf, __VMLINUX_SYMBOL_STR(perf_register_guest_info_callbacks) },
	{ 0xb035e8fb, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd53cd221, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x76437689, __VMLINUX_SYMBOL_STR(cleanup_srcu_struct) },
	{ 0x995d1071, __VMLINUX_SYMBOL_STR(prof_on) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0xafb8c6ff, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0xf7f41812, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0xfdf72b26, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf3341268, __VMLINUX_SYMBOL_STR(__clear_user) },
	{ 0x8ed1ef70, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xc7a2d612, __VMLINUX_SYMBOL_STR(preempt_notifier_register) },
	{ 0x68e9c0c1, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x947654d9, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc2a0f744, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4604a43a, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0x8d08eb04, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x86de5b02, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xce744c29, __VMLINUX_SYMBOL_STR(iommu_unmap) },
	{ 0x21a234f8, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0x17eb45ce, __VMLINUX_SYMBOL_STR(__srcu_read_lock) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0xa9a363f8, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x402cbbf, __VMLINUX_SYMBOL_STR(preempt_notifier_inc) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xe7232e0f, __VMLINUX_SYMBOL_STR(user_return_notifier_unregister) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x334468d9, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0x7ee5116a, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x4688d7ec, __VMLINUX_SYMBOL_STR(pvclock_gtod_unregister_notifier) },
	{ 0x9e05499a, __VMLINUX_SYMBOL_STR(init_srcu_struct) },
	{ 0xedee06f2, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x9a48965c, __VMLINUX_SYMBOL_STR(iommu_capable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x362b9b6, __VMLINUX_SYMBOL_STR(iommu_detach_device) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xf8089606, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x79f834e7, __VMLINUX_SYMBOL_STR(__get_user_pages_unlocked) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x72a98fdb, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0xf84e336a, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0xdc963745, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x6f2e4f46, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x85efc7e0, __VMLINUX_SYMBOL_STR(zero_pfn) },
	{ 0x781e66f0, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x6d098fb2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x5b049236, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x61cf83a6, __VMLINUX_SYMBOL_STR(iommu_present) },
	{ 0xba0a3a0b, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x882d86e1, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0xbb038ce4, __VMLINUX_SYMBOL_STR(perf_unregister_guest_info_callbacks) },
	{ 0xbf5877c9, __VMLINUX_SYMBOL_STR(anon_inode_getfd) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x55fac83a, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xe96cc629, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x632dd9cd, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xecf823a, __VMLINUX_SYMBOL_STR(static_key_slow_dec) },
	{ 0xb905c66, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5b83cda5, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x784b9f2a, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x47b56fd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe08e9ef7, __VMLINUX_SYMBOL_STR(perf_event_read_value) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4f7a4827, __VMLINUX_SYMBOL_STR(trace_print_hex_seq) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5a4b37a1, __VMLINUX_SYMBOL_STR(fpstate_init) },
	{ 0xc21bc2a8, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe0c811b0, __VMLINUX_SYMBOL_STR(synchronize_srcu) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1cd7b3b9, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x6c507fd4, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x70be4a1a, __VMLINUX_SYMBOL_STR(kobject_get_path) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9bb7651f, __VMLINUX_SYMBOL_STR(smp_ops) },
	{ 0xfa1eb910, __VMLINUX_SYMBOL_STR(unregister_syscore_ops) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x57f8e54d, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xaae24e61, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4ccdb8e5, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x9d8e2bdd, __VMLINUX_SYMBOL_STR(send_sig_info) },
	{ 0xb83b1ef2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x5da0daf8, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xeb7d183e, __VMLINUX_SYMBOL_STR(jump_label_rate_limit) },
	{ 0xcfb5871c, __VMLINUX_SYMBOL_STR(irq_work_queue) },
	{ 0xb1deb238, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xe369ff98, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x50a90e8d, __VMLINUX_SYMBOL_STR(bsearch) },
	{ 0x466c14a7, __VMLINUX_SYMBOL_STR(__delay) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xff6a259c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1791c5dc, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0xe756d1e4, __VMLINUX_SYMBOL_STR(iommu_iova_to_phys) },
	{ 0x5b56860c, __VMLINUX_SYMBOL_STR(vm_munmap) },
	{ 0x8af1ecbe, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x4c645f9e, __VMLINUX_SYMBOL_STR(static_key_slow_dec_deferred) },
	{ 0x99937511, __VMLINUX_SYMBOL_STR(perf_event_create_kernel_counter) },
	{ 0x2fec5dc7, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xd21fca22, __VMLINUX_SYMBOL_STR(pci_check_and_mask_intx) },
	{ 0x50cb78d5, __VMLINUX_SYMBOL_STR(__get_user_pages) },
	{ 0x368f1fea, __VMLINUX_SYMBOL_STR(static_key_slow_inc) },
	{ 0x5541ea93, __VMLINUX_SYMBOL_STR(on_each_cpu) },
	{ 0x67955ce6, __VMLINUX_SYMBOL_STR(profile_hits) },
	{ 0xd48f2499, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7bad5c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6988d0ca, __VMLINUX_SYMBOL_STR(cpu_dr7) },
	{ 0x76f07f18, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x58eff511, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0xfab76bac, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x3cec0845, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x844a4ade, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x1ebac2bd, __VMLINUX_SYMBOL_STR(getboottime64) },
	{ 0x196614ce, __VMLINUX_SYMBOL_STR(hw_breakpoint_restore) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "518559B4ACE82CCB8BA7EE0");