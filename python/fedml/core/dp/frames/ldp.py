from fedml.core.dp.mechanisms.dp_mechanism import DPMechanism
from fedml.core.dp.frames.base_dp_solution import BaseDPFrame


class LocalDP(BaseDPFrame):
    def __init__(self, args):
        super().__init__(args)
        self.set_ldp(
            DPMechanism(args.mechanism_type, args.epsilon, args.delta, args.sensitivity)
        )

    def add_local_noise(self, local_grad: dict):
        return super().add_local_noise(local_grad=local_grad)
